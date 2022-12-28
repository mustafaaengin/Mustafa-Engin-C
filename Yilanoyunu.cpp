#include<stdio.h> 
  #include<conio.h> 
  #include<stdlib.h> 
  #include<time.h> 
  struct yilan{ 
         int x,y; //yýlanýn hareket etmesinde kullanýlacak koordinatlar
  }; 
  int u=4; //yýlanýn uzunluðu
  int score=0; //yenilen yemlerin sayýsýný tutarak ona göre puan verecek
  int sutun=20,satir=10; //yemlerin rastgele konumlanmasýný saðlamak için
  char map[20][40]; 
  int tamammi_devammi(struct yilan snake[]){ //Bu fonksiyon, oyunun bitip bitmediðini kontrol eder. 
  //Yýlanýn duvara çarpmasý veya kendi vücuduna çarpmasý durumunda oyun bitirilir. Bu fonksiyon, 
  //oyunun bitip bitmediðini 1 veya 0 deðerleriyle geri döndürür.
      int i,k1=0,k2=0; 
      if(snake[0].x==0||snake[0].x==19||snake[0].y==0||snake[0].y==39){ 
         k1=1; 
      } 
      for(i=1;i<u;i++){ 
         if(snake[0].x==snake[i].x&&snake[0].y==snake[i].y){ 
             k2=1; 
             break; 
         } 
      } 
      if(k1==1||k2==1) return 1; 
      else return 0; 
  } 
           
  void yemleme(){ //Bu fonksiyon, rastgele bir koordinat üretir ve oyun alanýnýn içinde bulunan bu koordinatý yem olarak iþaretler.
       srand(time(NULL)); 
       satir=rand()%18+1; 
       sutun=rand()%38+1; 
  } 
void yem(char dizi[20][40],struct yilan snake[]){
   if(snake[u-1].x==satir&&snake[u-1].y==sutun){
      snake[u].x=satir;
      snake[u].y=sutun;
      u++;
      score=score+10;
      yemleme();
      printf("\a");
      //Yýlan yem yedikçe büyüme iþlemi
      snake[u].x=snake[u-1].x;
      snake[u].y=snake[u-1].y;
      u++;
   }
}
 
  void duvar(char dizi[20][40]){ //Bu fonksiyon, oyun alanýný duvarlarla çevreleyen bir harita oluþturur.
       int i,j; 
       for(i=0;i<20;i++){ 
          if(i==0||i==19){ 
              for(j=0;j<40;j++){ 
                  dizi[i][j]='='; 
              } 
          } 
          else{ 
               dizi[i][0]='|'; 
               for(j=1;j<39;j++){ 
                   dizi[i][j]=' '; 
               } 
               dizi[i][39]='|'; 
          } 
           
       } 
       map[satir][sutun]='x'; 
  } 
  void ciz(char dizi[20][40]){ //Bu fonksiyon, oyun alanýný ekrana çizer ve skoru gösterir.
       system("CLS"); 
       printf("Score: %d\n",score); 
       int i,j; 
       for(i=0;i<20;i++){ 
          for(j=0;j<40;j++){ 
              printf("%c",dizi[i][j]); 
          } 
          printf("\n"); 
       } 
        
  } 
  void baslangic(struct yilan yil[]){ //Bu fonksiyon, yýlanýn oyun baþlangýçta nerede olacaðýný belirler.
       yil[0].x=1; 
       yil[0].y=4; 
       yil[1].x=1; 
       yil[1].y=3; 
       yil[2].x=1; 
       yil[2].y=2; 
       yil[3].x=1; 
       yil[3].y=1; 
  } 
  void yilan (char dizi[20][40],struct yilan yil[]){ //Bu fonksiyon, yýlanýn hareketini yönetir ve oyun alanýna yýlaný çizer.
       yem(map,yil); 
       int i; 
       for(i=0;i<u;i++){ 
           dizi[yil[i].x][yil[i].y]='*'; 
       } 
  } 
  void sag(struct yilan snake[],int uzunluk){ 
       int i; 
       for(i=uzunluk-1;i>0;i--){ 
               snake[i].x=snake[i-1].x; 
               snake[i].y=snake[i-1].y; 
               } 
               snake[0].y++;  
  } 
  // buradaki sag sol yukari asagi fonksiyonlarý yýlanýn hareket yönüne göre koordinatlarý deðiþtirir ve yýlaný hareket ettirir
  void sol(struct yilan snake[],int uzunluk){ 
       int i; 
       for(i=uzunluk-1;i>0;i--){ 
               snake[i].x=snake[i-1].x; 
               snake[i].y=snake[i-1].y; 
               } 
               snake[0].y--;  
  }  
  void yukari(struct yilan snake[],int uzunluk){ 
       int i; 
       for(i=uzunluk-1;i>0;i--){ 
               snake[i].x=snake[i-1].x; 
               snake[i].y=snake[i-1].y; 
               } 
               snake[0].x--;  
  }  
  void asagi(struct yilan snake[],int uzunluk){ 
       int i; 
       for(i=uzunluk-1;i>0;i--){ 
               snake[i].x=snake[i-1].x; 
               snake[i].y=snake[i-1].y; 
       } 
        snake[0].x++;  
   
  } 
          
        
   
   
  int main(){ 
       
      char right='f'; // benim laptopumda w tuþu kýrýldýðý için bu þekilde yaptým wasd yi bir týk saða kaydýrdým
      char left='s'; 
      char up='e'; 
      char down='d'; 
      char yon; 
      long i; 
      int kontrol=0; 
      struct yilan snake[100]; 
   
      duvar(map); 
      baslangic(snake); 
      yilan(map,snake); 
      ciz(map); 
      
       while(1){ 
          yon=getch(); 
          i=0; 
       
          if(yon==right){ 
            while(i<100000){ 
             if(i%2000==0){ 
              if(tamammi_devammi(snake)){ 
                   ciz(map); 
                   kontrol=1; 
                   break; 
                    
               } 
                            
               sag(snake,u); 
               duvar(map); 
               yilan(map,snake); 
               ciz(map); 
             } 
             i++; 
             if(getch() != EOF) {//burada getch fonksiyonu bir tuþa basýlýrsa tuþun ascii deðerini döndürür ancak basýlmamýþsa eof deðerini 
             //döndürür. Burada diðer iþletim sistemlerinde de çalýþabilmesi için getch fonksiyonu kullanýldý
                break; 
             }
            } 
              
          }  
          else if(yon==left){ 
            while(i<100000){ 
             if(i%2000==0){ 
              if(tamammi_devammi(snake)){ 
                   ciz(map); 
                   kontrol=1; 
                   break; 
               } 
               sol(snake,u); 
               duvar(map); 
               yilan(map,snake); 
               ciz(map); 
             } 
             i++; 
             if(getch() != EOF) break; 
            }            
          } 
          else if(yon==up){ 
            while(i<100000){ 
             if(i%2000==0){ 
              if(tamammi_devammi(snake)){ 
                   ciz(map); 
                   kontrol=1; 
                   break; 
               } 
               yukari(snake,u); 
               duvar(map); 
               yilan(map,snake); 
               ciz(map); 
               } 
             i++; 
             if(getch() != EOF) break;  
            }    
          } 
          else if(yon==down){ 
            while(i<100000){ 
             if(i%2000==0){ 
               if(tamammi_devammi(snake)){ 
                   kontrol=1; 
                   ciz(map); 
                   kontrol=1; 
                   break; 
               } 
               asagi(snake,u); 
               duvar(map); 
               yilan(map,snake); 
               ciz(map);  
               } 
             i++; 
             if(getch() != EOF) break; 
            }   
          } 
          if(kontrol==1) break; 
           
                
      } 
       
       
       
      getch(); 
  }
