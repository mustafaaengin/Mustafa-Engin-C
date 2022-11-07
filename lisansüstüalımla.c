#include<stdio.h>
int main(){

    float yds;
    float ales;
    float m_ort;
    double totalortalama;
    printf("lutfen yds notunuzu giriniz:\n ");
    scanf("%f",&yds);
    printf("lutfen ales notunuzu giriniz:\n ");
    scanf("%f",&ales);
    printf("lutfen mezuniyet notunuzu giriniz:\n ");
    scanf("%f",&m_ort);
    totalortalama = (ales*0.5) + (yds*0.25) + (m_ort*0.25);
    printf("Lisans ustu alimlar icin notunuz = %f\n", totalortalama);
    if (yds < 70) {
        printf("yds sartini saglayamadinıiz");
    }
    if (yds >= 70) {

    if (totalortalama >=60){
        printf("tebrikler\n");
    }
    if (totalortalama <60){
        printf("basaramadiniz");
    }
    }
   return 0;
}