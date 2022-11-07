#include<stdio.h>
int main()
{
    int sayi;
    int birler,onlar,x,binler;
    int ab,cd,ba,dc,carpim_abcd,carpim_badc;
    printf("4 basamakli bir sayi girin:\t");
    scanf("%d",&sayi);
    birler = sayi%10;
    printf("Birler:%d\n",birler);
    onlar = (sayi%100-birler)/10;
    printf("Onlar:%d\n",onlar);
    x = (sayi%1000-sayi%100)/100;
    printf("Yüzler:%d\n",x);
    binler = (sayi%10000)/1000;
    printf("Binler:%d\n",binler);
    ab=binler*10+x;
    cd=onlar*10+birler;
    ba=x*10+binler;
    dc=birler*10+onlar;
    carpim_abcd=ab*cd;
    carpim_badc=ba*dc;
    if(carpim_abcd==carpim_badc){
        printf("girdiginiz sayı tersyüzdür");
    }
    else{
        printf("girdiginiz sayı tersyüz degildir");
    }

    return 0;
}