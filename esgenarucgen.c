#include<stdio.h>
int main()
{
    int i, j, satirsayisi, bosluksayisi;
    int  yildizsaiyisi = 1;
    printf("Satir sayisini giriniz:");
    scanf("%d",&satirsayisi);
    bosluksayisi = satirsayisi - 1;
    for(i=0; i<satirsayisi; i++)
    {
        for(j=0; j < bosluksayisi; j++)
           printf(" ");
        for(j=0; j < yildizsaiyisi; j++)
           printf("*");
        printf("\n");
        yildizsaiyisi += 2;
        bosluksayisi --;
    }
    return 0;
}