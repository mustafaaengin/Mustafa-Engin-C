#include<stdio.h>
#include<math.h>
// matematik ifadelerini(kök alma vs) kullanabilmek için mat.h kütüphanesini çağırmamız lazım
int main(){   
    int a,b,c;
    float x1,x2;
    float delta;
    printf(" x'2 li terimin katsayısını giriniz:\n");
    scanf("%d",&a);
    printf(" x li terimin katsayısını giriniz:\n");
    scanf("%d",&b);
    printf(" sabit terimin katsayısını giriniz:\n");
    scanf("%d",&c);
    delta = b*b -(4*a*c);
    x1 = (-b + (sqrt(delta)))/2*a;
    x2 = (b + (sqrt(delta)))/2*a;
    printf("denklemin kökleri %.2f %.2f dir", x1,x2);
    return 0;
}