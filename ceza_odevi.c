/*
#include <stdio.h>

// seri toplama
int seriToplama(int x) {

	int toplam = 0;
	
	for(int i = 1; i <= x; i++){
			
	    toplam = i + toplam;

	}

	return toplam;
}

int main()
{
     
    int x;
   
 	printf("\nx degeri giriniz :\n"); 
	 
	scanf("%d",&x);
	
	int seriToplam = seriToplama(x);
	
	printf("\nx icin seri toplam: %d \n", seriToplam); 

	 
    return(0);
}*/
/*
#include <stdio.h>
#include <stdlib.h>

// kelime son harflerini ver
char* kelimeSonHarfleriniVer(char * cumle) {
 
	char *sonHarfler = (char *)malloc(50 * sizeof(char));
	
	int i = 0;
	
	int sonHarflerIndex = 0;
	
	do {
	
		if(cumle[i] == ' ') {
		
			sonHarfler[sonHarflerIndex++] = cumle[i-1];
			
		}

		i++;

	} while(cumle[i] != '\0' && cumle[i] != '\n');
 	
	sonHarfler[sonHarflerIndex++] = cumle[i-1];
 
	sonHarfler[sonHarflerIndex++] = '\0';
 
	return sonHarfler;
}

int main()
{
     
    char cumle[250];
   
 	printf("\nString giriniz:\n"); 
	 
	fgets(cumle, sizeof cumle, stdin);
	 
	char * kelimeSonHarfleri = kelimeSonHarfleriniVer(cumle);
	
	printf("kelime son harfleri: %s\n", kelimeSonHarfleri); 
		 
    return(0);
}*/
/*
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h> 

// sesli harfleri * yildiz ile degistir
bool isSesliHarf(char harf){

 char sesliHarfler[10] = {'a', 'e','i', 'o','u', 
				 'A', 'E', 'I', 'O', 'U'};

	for(int i = 0; i < 10; i++){
			
			if(sesliHarfler[i] == harf){
				
				return true;
			}
			
	}

	return false;
}


void sesliHarfleriDegistir(char * cumle) {
	
	int i = 0;
	do {
	
		if(isSesliHarf(cumle[i])) {
		 
		 cumle[i] = '*';
			
		}

		i++;

	} while(cumle[i] != '\0' && cumle[i] != '\n');
 
}

int main()
{
     
    char cumle[250];
   
 	printf("\nString giriniz:\n"); 
	 
	fgets(cumle, sizeof cumle, stdin);
	 
	sesliHarfleriDegistir(cumle);
	
	printf("> %s\n", cumle); 
		 
    return(0);
}*/
/*
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h> 

// asal sayi kontrolu

bool isAsal(int sayi){

  int i = 2;

  while(i <= sayi /2)
    {
         if(sayi % i == 0) {
             
             return false;
             
		 } else {
             i++;
		 }
    }
    
    return true;
}

 
int main()
{
    int x;
     
 	printf("\nSayi giriniz:\n"); 
	 
	scanf("%d", &x);
	 
	bool asal = isAsal(x);
	
	if(asal) {
		
		printf("\n%d sayisi asaldir.\n", x); 
		
	} else {
		
		printf("\n%d sayisi asal degildir.\n", x); 
	}
		 
    return(0);
}*/

// sayinin karesini alma
/*
#include <stdio.h>

int kare_al(int id);

int main(void)
{
  int id;

  id = 21;

  printf("%d sayısının karesi: %d", id, kare_al(id));

  return 0;
}
*/
// girilen yasa gore 
/*
void donem(int kullaniciYasi){
     if(kullaniciYasi >= 0 && kullaniciYasi < 15){
          printf("Cocuksunuz.");
     }
     else if(kullaniciYasi >= 15 && kullaniciYasi < 30){
          printf("Gencsiniz.");
     }
     else if(kullaniciYasi >= 30 && kullaniciYasi < 55){
          printf("Yetiskinsiniz.");
     }
     else if(kullaniciYasi >= 55 && kullaniciYasi < 120){
          printf("Yaslisiniz.");
     }
     else{
          printf("Yanlis giris yaptiniz.");
     }
}
*/
// toplama
/*
#include <stdio.h>

int topla(int s1, int s2){
     return s1+s2; 
}
*/
/* //dairenin alani ve cevrei 2 fonksiyon
#include <stdio.h>
#define pi 3.14

float alan(float cap){
     float sonuc;
     sonuc = pi * cap * cap;
     return  sonuc;
}
float cevre(float cap){
     float sonuc;
     sonuc = 2 * pi * cap;
     return  sonuc;
}

int main(){
     int daireYaricap,sec;

     printf("Dairenin yaricapini giriniz : ");
     scanf("%d",&daireYaricap);
     printf("\nHangi islemi yapacaksiniz ? \n");
     printf("Daire alan bulma icin 1\nDaire cevre bulma icin 2\nSeciminiz : ");
     scanf("%d",&sec);

     if(sec == 1)
          printf("Dairenin alani : %f \n",alan(daireYaricap));
     else if(sec == 2) 
          printf("Dairenin cevresi : %f", cevre(daireYaricap));
     else
          printf("Yanlis secim yatiniz.");
}*/
// üs alma
/*#include <stdio.h>

int usal(int t, int u){
     int s=1;

     for(int i=0 ; i<u ; i++){
          s = s * t;
     }

     return s;
}

int main(){
     int us,taban,sonuc;

     printf("Taban giriniz : ");
     scanf("%d",&taban);
     printf("Us giriniz : ");
     scanf("%d",&us);

     sonuc = usal(taban,us); 

     printf("%d uzeri %d = %d",taban, us, sonuc);
}*/
//carpim tablosu
/*#include <stdio.h>
void carpimTablosu(){
     for (int i=1; i <= 5; i++){
         for (int j=1; j <= 5; j++){
             printf("%d x %d : %d\t",i, j, i*j);
         }
         printf("\n");
     }
 }

 int main(){    
     carpimTablosu();
 }*/
 // max min bulma
 /*#include <stdio.h>
#define elemanSayisi 5

void maxMinBul(int dizi[]){
     int max,min;

     max = dizi[0];
     min = dizi[0];

     for(int i=0 ; i<elemanSayisi ; i++){
          if(max < dizi[i])
               max = dizi[i];

          if(min > dizi[i])
               min = dizi[i];
     }

     printf("Dizideki en buyuk sayi : %d \n", max);
     printf("Dizideki en kucuk sayi : %d", min);
}

int main(){
     int sayilar[elemanSayisi];

     for(int i=0 ; i<elemanSayisi ; i++){
          printf("%d. sayiyi giriniz : ",i+1);
          scanf("%d", &sayilar[i]);
     }

     maxMinBul(sayilar);
}*/
// hocam burda toplam 4 fonksiyon var 
/*
#include <stdio.h>
#include <math.h>

void denklemiyaz(float dizi[], int derece)
{
      static int i;
      printf("\nGirdiginiz denklem :\n\n");
      for(i=0;i<=derece;i++)
      {
           if(i!=derece)
           {
                 printf("%.2f*x^%d + ",dizi[i],i);
           }
           else
           {
                 printf("%.2f*x^%d",dizi[i],i);
           }
      }
}

float yerinekoy(float dizi[],float sayi,int derece)
{
         static float sonuc=0;
         static int i;
         for(i=0;i<=derece;i++)
         {
                sonuc=sonuc+dizi[i]*pow(sayi,i);
         }
         return sonuc;
}

void denklemal()
{
         static int i,derece;
         static float dizi[100],sayi;
         printf("Denklemin derecesini giriniz :"); scanf("%d",&derece);
         for(i=0;i<=derece;i++)
         {
               printf("%d dereceli terimin katsayisini giriniz :"); scanf("%f",&dizi[i]);
         }
         printf("Denklemde yerine koymak istediginiz sayiyi giriniz :"); scanf("%f",&sayi);
         denklemiyaz(dizi,derece);
         printf("\n\nSonuc : %.2f",yerinekoy(dizi,sayi,derece));
}

int main()
{
         denklemal();
         return 0;
}
*/
/*
//iki sayi carpimi
#include <stdio.h>
int carp(int x, int y);
void main()
{ int a, b, c;
printf ("Birinci sayiyi giriniz:");
scanf("%d", &a);
printf("Ikinci sayiyi giriniz:");
scanf("%d", &b);
c=carp(a, b);
printf("Carpim: %d\n", c);
}
int carp(int x, int y)
{ int sonuc;
sonuc= x * y;
return sonuc;
}*/
// faktoriel hesaplama
/*
#include <stdio.h>
int fakt(int);
void main()
{
int n;
 printf("Pozitif bir tam sayi giriniz:");
 scanf("%d", &n);
 printf("Sayinin faktoriyeli: %d\n", fakt(n));
}
int fakt(int i)
{ int j, f = 1;
for(j = i; j >= 1; j--)
f = f * j;
return f;
}*/
// girilen harfi buyuk harf yapma
/*#include <stdio.h>
char buyuk(char);
void main ()
{ char ch;
printf("Bir harf giriniz: ");
scanf ("%c", &ch);
printf("%c\n", buyuk(ch));
}
char buyuk(char kar)
{ if (kar >= 'a' && kar <= 'z')
 return kar - 32;
 else
 return kar;
}
*/
// not listesi yapma 4 fonksiyon var burda da
/*
#include <stdio.h>
void giris(int no[], int not[], int N);
float ortalama(int not[], int N);
void goruntule(int no[], int not[], int N);
void main()
{ int N;
int OgrNo[BUFSIZ], BNotu[BUFSIZ];
float ort;
printf("Ogrenci sayisini giriniz: ");
scanf("%d", &N);
giris(OgrNo, BNotu, N);
goruntule(OgrNo, BNotu, N);
ort = ortalama(BNotu, N);
printf("Not ortalamasi: %5.2f\n", ort);
}
void giris(int no[], int not[], int N)
{
int i;
for (i=0; i<N; i++)
{ printf("Ogrenci no gir: ");
scanf("%d", &no[i]);
printf("%d numarali ogrencinin notunu gir : ", no[i]);
scanf("%d", &not[i]);
}
}void goruntule(int no[], int not[], int N)
{
printf("Ogrenci#\tNotu\n");
for (int i=0; i<N; i++)
printf("%8d\t%3d\n", no[i], not[i]);
}
float ortalama(int not[], int N)
{ float t;
int i;
t = 0;
for (i=0; i<N; i++)
t = t + not[i];
float ort = t / N;
return ort;
}*/
// iki sayi arasindaki asal sayilari gösterme
/*
#include <stdio.h>
int main()
{
    int kucuk, buyuk, i, a;
    printf("İki sayı girin (aralık koyun): ");
    scanf("%d %d", &kucuk, &buyuk);

    printf("%d ve %d Arasındaki asal sayılar: ", kucuk, buyuk);

    while (kucuk < buyuk)
    {
        a = 0;

        for(i = 2; i <= kucuk/2; ++i)
        {
            if(kucuk % i == 0)
            {
                a = 1;
                break;
            }
        }

        if (a == 0)
            printf("%d ", kucuk);

        ++kucuk;
    }

    return 0;
}*/
/*
#include <stdio.h>
// bolme islemi

int bolmeIslemi(int x, int y);
 
int main() {
 
    int sayi1 = 30;
    int sayi2 = 5;
    int sonuc = bolmeIslemi(sayi1, sayi2);
    printf("%d / %d = %d\n", sayi1, sayi2, sonuc);
    return 0;
}
 
int bolmeIslemi(int x, int y) {
    if (y == 0)
        return 0;
    if (x - y == 0)
        return 1;
    if (x < y)
        return 0;
    return (1 + bolmeIslemi(x - y, y));
 
}*/
// carpma
/*
#include <stdio.h>
 
int carpmaIslemi(int x, int y);
 
int main() {
    int sayi1 = 15;
    int sayi2 = 6;
    int sonuc = carpmaIslemi(sayi1, sayi2);
    printf("%d * %d = %d\n", sayi1, sayi2, sonuc);
    return 0;
}
 
int carpmaIslemi(int x, int y) {
    if (y == 0)
        return 0;
    return x + carpmaIslemi(x, y - 1);
}*/
// ikili den sekizlige ve sekizliden ikiliye ceviren program burda da 2 fonksiyon var
/*#include <stdio.h>
#include <math.h>
int ikilidensekizli(int n);
int sekizlidenikili(int n);
int main()
{
    int n;
    char c;
    printf("1. ikiligi sekizliye donusturmek icin 'o' harfini girin.\n");
    printf("2. Sekizliyi ikiliye donusturmek icin'b' harfini girin.\n");
    scanf("%c",&c);
    if ( c=='o' || c=='O')
    {
        printf("ikilik bir sayi girin: ");
        scanf("%d",&n);
        printf("%d ikili = %d sekizli", n, ikilidensekizli(n));
    }
    if ( c=='b' || c=='B')
    {
        printf("Sekizlik bir sayi girin: ");
        scanf("%d",&n);
        printf("%d sekizli = %d ikili",n, sekizlidenikili(n));
    }
    return 0;
}
int ikilidensekizli(int n)
{
    int sekizli=0, ondalik=0, i=0;
    while(n!=0)
    {
        ondalik+=(n%10)*pow(2,i);
        ++i;
        n/=10;
    }
    i=1;
    while (ondalik!=0)
    {
        sekizli+=(ondalik%8)*i;
        ondalik/=8;
        i*=10;
    }
    return sekizli;
}
int sekizlidenikili(int n)
{
    int ondalik=0, ikili=0, i=0;
    while (n!=0)
    {
        ondalik+=(n%10)*pow(8,i);
        ++i;
        n/=10;
    }
    i=1;
    while(ondalik!=0)
    {
        ikili+=(ondalik%2)*i;
        ondalik/=2;
        i*=10;
    }
    return ikili;
}*/