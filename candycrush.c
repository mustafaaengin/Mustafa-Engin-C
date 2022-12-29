#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SATIR 10
#define SUTUN 10

char tahta[SATIR][SUTUN];

char rastgeleSekilUret()
{
    int r = rand() % 4;

    if (r == 0)
        return '*';
    if (r == 1)
        return '#';
    if (r == 2)
        return '&';
    if (r == 3)
        return '$';
}

void tahtayiDoldur()
{
    int i, j;

    for (i = 0; i < SATIR; i++)
        for (j = 0; j < SUTUN; j++)
            tahta[i][j] = rastgeleSekilUret();
}


void tahtayiYazdir()
{
    int i, j;

    printf("  ");
    for (i = 0; i < SUTUN; i++)
        printf("%d ", i);
    printf("\n");

    for (i = 0; i < SATIR; i++)
    {
        printf("%d ", i);
        for (j = 0; j < SUTUN; j++)
            printf("%c ", tahta[i][j]);
        printf("\n");
    }
}

void tahtayiGuncelle(int x, int y, int direction)
{
    int i, j;

    // yanyana eslesme varsa sil
    if (direction == 0)
    {
        i = x;
        while (i > 0 && tahta[i][y] == tahta[i - 1][y])
            i--;

        j = x;
        while (j < SATIR - 1 && tahta[j][y] == tahta[j + 1][y])
            j++;

        if (j - i + 1 >= 3)
        {
            for (; i <= j; i++)
                tahta[i][y] = ' ';
        }
        tahta[0][j] = rastgeleSekilUret();
    }

    // üstüste eslesme varsa sil
    if (direction == 1)
    {
        i = y;
        while (i > 0 && tahta[x][i] == tahta[x][i - 1])
            i--;

        j = y;
        while (j < SUTUN - 1 && tahta[x][j] == tahta[x][j + 1])
            j--;
    }

    // yanyana eslesme varsa sil
    if (direction == 2)
    {
        i = x;
        while (i > 0 && tahta[i][y] == tahta[i - 1][y])
            i--;

        j = x;
        while (j < SATIR - 1 && tahta[j][y] == tahta[j + 1][y])
            j++;

        if (j - i + 1 >= 3)
        {
            for (; i <= j; i++)
                tahta[i][y] = ' ';
        }
    }

    // üstüste eslesme varsa sil
    if (direction == 3)
    {
        i = y;
        while (i > 0 && tahta[x][i] == tahta[x][i - 1])
            i--;

        j = y;
        while (j < SUTUN - 1 && tahta[x][j] == tahta[x][j + 1])
            j++;

        if (j - i + 1 >= 3)
        {
            for (; i <= j; i++)
                tahta[x][i] = ' ';
        }
    }

    // tahtayi guncelle
    for (i = SATIR - 1; i >= 1; i--)
        for (j = 0; j < SUTUN; j++)
            if (tahta[i][j] == ' ')
                tahta[i][j] = tahta[i - 1][j];

    // en üst satiri doldur
    for (j = 0; j < SUTUN; j++)
        if (tahta[0][j] == ' ')
            tahta[0][j] = rastgeleSekilUret();
}

int main()
{
    int x, y, direction, cikis = 0;
    char input;

    srand(time(NULL));

    tahtayiDoldur();

    while (1)
    {
        tahtayiYazdir();

        printf("Koordinat girin satir");
                scanf(" %d %d", &x, &y);

        printf("Yukari (0), Asagi (1), Saga (2), Sola (3) kaydir: ");
        scanf(" %d", &direction);

        if (direction == 0)
        {
            if (x == 0)
            {
                printf("Hata: duvara denk geldin!\n");
                continue;
            }
            tahta[x][y] = tahta[x - 1][y];
            tahta[x - 1][y] = ' ';
        }
        if (direction == 1)
        {
            if (x == SATIR - 1)
            {
                printf("Hata: duvara denk geldin!\n");
                continue;
            }
            tahta[x][y] = tahta[x + 1][y];
            tahta[x + 1][y] = ' ';
        }
        if (direction == 2)
        {
            if (y == SUTUN - 1)
            {
                printf("Hata: duvara denk geldin!\n");
                continue;
            }
            tahta[x][y] = tahta[x][y + 1];
            tahta[x][y + 1] = ' ';
        }
        if (direction == 3)
        {
            if (y == 0)
            {
                printf("Hata: duvara denk geldin!\n");
                continue;
            }
            tahta[x][y] = tahta[x][y - 1];
            tahta[x][y - 1] = ' ';
        }

        tahtayiGuncelle(x, y, direction);

        printf("Oyunu bitirmek icin '1' girin: ");
        scanf(" %c", &input);
        if (input == '1')
            break;
    }

    return 0;
}

