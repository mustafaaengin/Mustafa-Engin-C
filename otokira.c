#include<stdio.h>
int main(){
    int gun,km,tutar;
    char secim;
    printf("hangi model");
    scanf("%c",&secim);
    switch(secim){
        case'A':
        case'a': 
        printf("kaç gün kullandınız");
        scanf("%d",&gun);
        printf("kaç km yol gittiniz");
        scanf("%d",&km);
        tutar = gun*20 + km*18;
        printf("borcunuz %d TL",tutar); break;
        case'B':
        case'b':
        printf("kaç gün kullandınız");
        scanf("%d",&gun);
        printf("kaç km yol gittiniz");
        scanf("%d",&km);
        tutar = gun*32 + km*22;
        printf("borcunuz %d TL",tutar); break;
        case's':
        case'S':
        printf("kaç gün kullandınız");
        scanf("%d",&gun);
        printf("kaç km yol gittiniz");
        scanf("%d",&km);
        tutar = gun*43 + km*28;
        printf("borcunuz %d TL",tutar); break;
        case'p':
        case'P':
        printf("kaç gün kullandınız");
        scanf("%d",&gun);
        printf("kaç km yol gittiniz");
        scanf("%d",&km);
        tutar = gun*51 + km*36 ;
        printf("borcunuz %d TL",tutar); break;
        default:
        printf("hata");



    }
    return 0;
}