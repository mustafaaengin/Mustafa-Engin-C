#include <stdio.h>

void matrisTopla(int matris1[][3], int matris2[][3], int sonuc[][3], int satir, int sutun) {
    int i, j;
    for (i = 0; i < satir; i++) {
        for (j = 0; j < sutun; j++) {
            sonuc[i][j] = matris1[i][j] + matris2[i][j];
        }
    }
}

void matrisiYazdir(int matris[][3], int satir, int sutun) {
    int i, j;
    for (i = 0; i < satir; i++) {
        for (j = 0; j < sutun; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int satir = 3;
    int sutun = 3;

    int matris1[3][3] = {{1, 3, 5}, {7, 9, 11}, {13, 15, 17}};
    int matris2[3][3] = {{70, 98, 23}, {12, 56, 10}, {45, 32, 230}};
    int sonuc[3][3];

    matrisTopla(matris1, matris2, sonuc, satir, sutun);

    printf("Matris 1:\n");
    matrisiYazdir(matris1, satir, sutun);

    printf("\nMatris 2:\n");
    matrisiYazdir(matris2, satir, sutun);

    printf("\nToplam Matris:\n");
    matrisiYazdir(sonuc, satir, sutun);

    return 0;
}

