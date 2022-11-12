#include<stdio.h>

int main()
{
    int i;
    int cvp1,cvp2,cvp3,cvp4,cvp5;
    int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
    int totalpuan;
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    int f=0;
    printf("  Testimize hosgeldiniz\n\n");
    
    printf("> Baslamak icin lutfen 1 e basiniz\n");
    printf("> Cikmak icin lutfen 2 ye basiniz\n");
    
    while (a==0){
    scanf("%d", &i);
    if(i==1)
    {
         printf("testimiz basliyor\n\n");
         a=1;
    }
    else if(i==2)
    {
         printf("Test sonlandi\n\n");
         a=1;
    }
    else
    {
         printf("Gecersiz tuslama\n\n");
         a=0;
    }
    }
    if(i==1)
    {
         printf("1)1. soru?\n\n");
         printf("1)cevap\n");
         printf("2)cevap\n");
         printf("3)cevap\n");
         printf("4)cevap\n");
         
         printf("Cevabinizi giriniz : ");
         while (b==0){
         scanf("%d", &cvp1);
         
         if(cvp1==1)
         {
              point1 = 1;
              b=1;
         }
         else if(cvp1==2)
         {
              point1 = 2;
              b=1;
         }
        else if(cvp1==3)
         {
              point1 = 3;
              b=1;
         }
         else if(cvp1==4)
         {
              point1 = 4;
              b=1;
         }
         else {
            printf("Gecersiz tuslama\n\n");
            b=0;
         }}
         printf("2)2. soru?\n\n");
         printf("1)cevap\n");
         printf("2)cevap\n");
         printf("3)cevap\n");
         printf("4)cevap\n");
         
         printf("Cevabinizi giriniz : ");
         while (c==0){
         scanf("%d", &cvp2);
         
         if(cvp2==1)
         {
              point2 = 1;
              c=1;
         }
         else if(cvp2==2)
         {
              point2 = 2;
              c=1;
         }
         else if(cvp2==3)
         {
              point2 = 3;
              c=1;
         }
         else if(cvp2==4)
         {
              point2 = 4;
              c=1;
         }
         else {
            printf("Gecersiz tuslama\n\n");
            c=0;
         }}
         printf("3)3. soru?\n\n");
         printf("1)cevap\n");
         printf("2)cevap\n");
         printf("3)cevap\n");
         printf("4)cevap\n");
         
         printf("Cevabinizi giriniz : ");
         while (d==0){
         scanf("%d", &cvp3);
         
         if(cvp3==1)
         {
              point3 = 1;
              d=1;
         }
         else if(cvp3==2)
         {
              point3 = 2;
              d=1;
         }
         else if(cvp3==3)
         {
              point3 = 3;
              d=1;
         }
         else if(cvp3==4)
         {
              point3 = 4;
              d=1;
         }
         else{
            printf("Gecersiz tuslama\n\n");
            d=0;
         }}
         printf("4)4. soru?\n\n");
         printf("1)cevap\n");
         printf("2)cevap\n");
         printf("3)cevap\n");
         printf("4)cevap\n");
         
         printf("Cevabinizi giriniz : ");
         while (e==0){
         scanf("%d", &cvp4);
         
         if(cvp4==1)
         {
              point4 = 1;
              e=1;
         }
         else if (cvp4==2)
         {
              point4 = 2;
              e=1;
         }
         else if(cvp4==3)
         {
              point4 = 3;
              e=1;
         }
         else if(cvp4==4)
         {
              point4 = 4;
              e=1;
         }
         else{
            printf("Gecersiz tuslama\n\n");
            e=0;
         }}
         printf("5)5. soru?\n\n");
         printf("1)cevap\n");
         printf("2)cevap\n");
         printf("3)cevap\n");
         printf("4)cevap\n");
         
         printf("Cevabinizi giriniz : ");
         while (f==0){
         scanf("%d", &cvp5);
         
         if(cvp5==1)
         {
              point5 = 1;
              f=1;
         }
         else if(cvp5==2)
         {
              point5 = 2;
              f=1;
         }
         else if(cvp5==3)
         {
              point5 = 3;
              f=1;
         }
         else if(cvp5==4)
         {
              point5 = 4;
              f=1;
         }
         else {
            printf("Gecersiz tuslama\n\n");
            f=0;
         }}
             totalpuan = point1 + point2 + point3 + point4 + point5;

    if(totalpuan==5){
        printf("5 puana ne karsilik geliyosa artik");
    }
    else if(totalpuan==6){
        printf("6 puana ne karsilik geliyosa artik");
    }
    else if(totalpuan==7){
        printf("7 puana ne karsilik geliyosa artik");
    }
    else if(totalpuan==8){
        printf("8 puana ne karsilik geliyosa artik");
    }
    else if(totalpuan==9){
        printf("9 puana ne karsilik geliyosa artik");
    }
    else if(totalpuan==10){
        printf("10 puana ne karsilik geliyosa artik");
    }
    else if(totalpuan==11){
        printf("11 puana ne karsilik geliyosa artik");
    }
    else if(totalpuan==12){
        printf("12 puana ne karsilik geliyosa artik");
    }
    else if(totalpuan==13){
        printf("13 puana ne karsilik geliyosa artik");
    }
    else if(totalpuan==14){
        printf("14 puana ne karsilik geliyosa artik");
    }
    else if(totalpuan==15){
        printf("15 puana ne karsilik geliyosa artik");
    }
    else if(totalpuan==16){
        printf("16 puana ne karsilik geliyosa artik");
    }
    else if(totalpuan==17){
        printf("17 puana ne karsilik geliyosa artik");
    }
    else if(totalpuan==18){
        printf("18 puana ne karsilik geliyosa artik");
    }
    else if(totalpuan==19){
        printf("19 puana ne karsilik geliyosa artik");
    }
    else if(totalpuan==20){
        printf("20 puana ne karsilik geliyosa artik");
    }
     return 0;
}
}