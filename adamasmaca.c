#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include <time.h> 
#include<stdbool.h> 
 
 int secilen,yenisayac,sayac =0,i,sayi,adam =0;
 bool random;  
 char tahmin[20],harf;   
 int main();  	
 
void adamim(int adam){
		switch(adam){
			case 1 : 
	    printf(" __________     \n");
		printf("|      ( )      \n");
		printf("|               \n");
		printf("|               \n");
		printf("|               \n");
		printf("|               \n");
		printf("|__             \n"); 
		printf("\n5 tane yanlis tahmin hakkin var!\n");
			break;
			case 2 :
		printf(" __________     \n");
		printf("|      ( )      \n");
		printf("|       |       \n");
		printf("|       |       \n");
		printf("|       |       \n");
		printf("|       |       \n");
		printf("|__             \n");
		printf("\n4 tane yanlis tahmin hakkin var!\n");
			break;			
			case 3 :
		printf(" __________     \n");
		printf("|      ( )      \n");
		printf("|       |       \n");
		printf("|      /|       \n");
		printf("|       |       \n");
		printf("|       |       \n");
		printf("|__             \n");
		printf("\n3 tane yanlis tahmin hakkin var!\n");
			break;			
			case 4 : 
		printf(" __________     \n");
		printf("|      ( )      \n");
		printf("|       |       \n");
		printf("|      /|\\     \n");
		printf("|       |       \n");
		printf("|       |       \n");
		printf("|__             \n");
		printf("\n2 tane yanlis tahmin hakkin var!\n");
			break;		
			case 5 :	
		printf(" __________     \n");
		printf("|      ( )      \n");
		printf("|       |       \n");
		printf("|      /|\\     \n");
		printf("|       |       \n");
		printf("|      /|       \n");
		printf("|__             \n");
		printf("\n1 tane yanlis tahmin hakkin var!\n");
			break;	
		   case 6:		
		printf(" __________     \n");
		printf("|      ( )      \n");
		printf("|       |       \n");
		printf("|      /|\\      \n");
		printf("|       |       \n");
		printf("|      / \\     \n");
		printf("|__             \n");
			break; 
		
			default : 
			printf("\nIyi gidiyorsun!\n\n");
			break;
	}
}
	
void harfbulma(char kelime[20])
{   
    int giris;
	int uzunluk = strlen(kelime);
	printf("Kelimenin icinde oldugunu dusundugunuz harfi giriniz.(Turkce karakter kullanmayiniz.)\nKelimeniz %d harflidir.\n",uzunluk);
    scanf("%s",&harf);
    for(i=0;i<uzunluk;i++)
    {
     if(kelime[i]==harf)
     {
	  sayac++;
     }
     else
     {  
     	 continue;
     }
    }
    printf("\nKelimenizin icinde  %d tane %c harfi bulunmaktadir.\n", sayac, harf);
    if(sayac==0)
	{
		adam++;
	}
	adamim(adam);
	sayac=0;
	if(adam!=6)
	{
	printf("Tahmini kelimenizi yazmak icin (1)\nTekrar harf aratmak icin 2 ye basin.");
	scanf("%d",&giris);
    } 
	else
	{
		printf("KAYBETTIN. ADAM ASILDI!");
	}  
	if(giris==1)
	{
		printf("tahmin ettiginiz kelimeyi giriniz.");
		scanf("%s",tahmin);
		if(strcmp(tahmin,kelime)==0)
		{
			printf("dogru tahmin\n");
			printf("kazandiniz");
	
		}
		else
		{
			printf("yanlis tahmin\n");
		    adam++;
		    adamim(adam);
		    main();
		}
		
	}
	else
	{  if(adam!=6)
	   {
		main();
	   }
	}
}


int main()
{   
    srand(time(NULL));
    char kelimeler[5][20]={"lale","asker","cicek","araba","catal"};
	int sayi;
    if(random==false)
{
	secilen= rand()%5;
	random=true;
}  	
	harfbulma(kelimeler[secilen]);

	return 0;
}
