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
            m[i][j] = rand()%19 + 6;
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

int roznica_sum_przekatnych(mac m)
{
    int przekatna = 0;
    int przeciwprzekatna = 0;

    for (int i = 0; i < WIERSZ; ++i) {
        przekatna += m[i][i];
        przeciwprzekatna += m[i][KOLUMNA - 1 - i];
    }

    return przekatna - przeciwprzekatna;
}


int main(void)
{
    mac macierz;
    uzupelnij_macierz(macierz);
    wypisz_macierz(macierz);
    int rozncica_przekatnych = roznica_sum_przekatnych(macierz);

    printf("Roznica sum przekatnej i przeciwprostokatnej: %d\n", rozncica_przekatnych);
    return 0;
}