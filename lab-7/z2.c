#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WIERSZ 3
#define KOLUMNA 4
typedef double mac[WIERSZ][KOLUMNA];


void wypisz_macierz(mac m)
{
    printf("\nMacierz:\n");
    for (int i = 0; i < WIERSZ; ++i) {
        for (int j = 0; j < KOLUMNA; ++j) {
            printf("%lf\t", m[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}


void wypelnij_m(mac macierz)
{
    srand(time(0));
    for (int i = 0; i < WIERSZ; ++i) {
        for (int j = 0; j < KOLUMNA; ++j) {
            macierz[i][j] = rand()%22-11 + rand()/(RAND_MAX+1.0);
        }
    }
}


void pomnoz_przez_skalar(mac macierz, double skalar)
{
    for (int i = 0; i < WIERSZ; ++i) {
        for (int j = 0; j < KOLUMNA; ++j) {
            macierz[i][j] *= skalar;
        }
    }
}



int main(void)
{
    double skalar;
    mac macierz;

    printf("Podaj wartosc skalarna:\n");
    scanf("%lf", &skalar);

    wypelnij_m(macierz);
    wypisz_macierz(macierz);

    pomnoz_przez_skalar(macierz, skalar);
    wypisz_macierz(macierz);

    return 0;
}