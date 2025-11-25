#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define WIERSZ 5
#define KOLUMNA 5
typedef int mac[WIERSZ][KOLUMNA];


void uzupelnij_macierz(mac m)
{
    srand(time(0));
    for (int i = 0; i < WIERSZ; ++i) {
        for (int j = 0; j < KOLUMNA; ++j) {
            m[i][j] = rand()%16;
        }
    }
}

void wypisz_macierz(mac m)
{
    printf("\nMACIERZ\n");
    for (int i = 0; i < WIERSZ; ++i) {
        for (int j = 0; j < KOLUMNA; ++j) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void odwroc_przekatna(mac m)
{
    for (int i = 0; i < WIERSZ / 2; ++i) {
        int t = m[i][i];
        m[i][i] = m[WIERSZ - 1 - i][WIERSZ - 1 - i];
        m[WIERSZ - 1 - i][WIERSZ - 1 - i] = t;
    }
}


int main(void)
{
    mac macierz;
    uzupelnij_macierz(macierz);
    wypisz_macierz(macierz);

    odwroc_przekatna(macierz);
    wypisz_macierz(macierz);

    return 0;
}