#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define WIERSZ 4
#define KOLUMNA 4
typedef int mac[WIERSZ][KOLUMNA];


void uzupelnij_macierz(mac m)
{
    srand(time(0));
    for (int i = 0; i < WIERSZ; ++i) {
        for (int j = 0; j < KOLUMNA; ++j) {
            m[i][j] = rand()%41 - 20;
        }
    }
}

void wyswietl_macierz(mac m)
{
    printf("\nMACIERZ:\n");
    for (int i = 0; i < WIERSZ; ++i) {
        for (int j = 0; j < KOLUMNA; ++j) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


void wypisz_sumy_wierszy(mac m)
{
    int suma = 0;

    printf("Sumy elementow wierszy macierzy: \n");
    for (int i = 0; i < WIERSZ; ++i) {
        suma = 0;
        for (int j = 0; j < KOLUMNA; ++j) {
            suma += m[i][j];
        }
        printf("Suma %d wiersza: %d\n", i, suma);
    }
}

void wypisz_sumy_kolumn(mac m)
{
    int suma = 0;

    printf("Sumy elementow kolumn macierzy: \n");
    for (int i = 0; i < KOLUMNA; ++i) {
        suma = 0;
        for (int j = 0; j < WIERSZ; ++j) {
            suma += m[j][i];
        }
        printf("Suma %d kolumny: %d\n", i, suma);
    }
}


int main(void)
{
    mac macierz;

    uzupelnij_macierz(macierz);
    wyswietl_macierz(macierz);
    wypisz_sumy_wierszy(macierz);
    wypisz_sumy_kolumn(macierz);
    return 0;
}