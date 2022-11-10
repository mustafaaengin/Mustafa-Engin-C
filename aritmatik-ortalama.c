#include<stdio.h>
// matematik ifadelerini(kök alma vs) kullanabilmek için mat.h kütüphanesini çağırmamız lazım

int main(){
        int a,b,c,d,e;
    float aritmetik_ortalama;
    printf("5 tam sayı girin:\n");
    scanf("%d %d %d %d %d\n",&a,&b,&c,&d,&e);
    aritmetik_ortalama = (a+b+c+d+e)/5.0;
    printf("girdiginiz sayıların aritmetik ortalaması %f dir\n",aritmetik_ortalama);
    return 0;
}