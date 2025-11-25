#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define WIERSZE 3
#define KOLUMNY 4
typedef int mac[WIERSZE][KOLUMNY];


void uzupelnij_macierz(mac m)
{
    srand(time(0));
    for (int i = 0; i < WIERSZE; ++i) {
        for (int j = 0; j < KOLUMNY; ++j) {
            int wartosc = -5 + rand() % 11;
            m[i][j] = wartosc;
        }
    }
}


void wyswietl_macierz(mac m)
{
    printf("\nMacierz:\n");
    for (int i = 0; i < WIERSZE; ++i) {
        for (int j = 0; j < KOLUMNY; ++j) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

int znajdz_najwieksza_wartosc(mac m)
{
    int najwieksza = m[0][0];
    for (int i = 0; i < WIERSZE; ++i) {
        for (int j = 0; j < KOLUMNY; ++j) {
            if (m[i][j] > najwieksza) {
                najwieksza = m[i][j];
            }
        }
    }

    return najwieksza;
}

int znajdz_najmniejsza_wartosc(mac m)
{
    int najmniejsza = m[0][0];
    for (int i = 0; i < WIERSZE; ++i) {
        for (int j = 0; j < KOLUMNY; ++j) {
            if (m[i][j] < najmniejsza) {
                najmniejsza = m[i][j];
            }
        }
    }
    return najmniejsza;
}

int main(void)
{
    mac macierz;

    uzupelnij_macierz(macierz);
    wyswietl_macierz(macierz);

    printf("Najwieksza wartosc w macierzy to: %d\n", znajdz_najwieksza_wartosc(macierz));
    printf("Najmniejsza wartosc w macierzy to: %d\n", znajdz_najmniejsza_wartosc(macierz));

    return 0;
}