#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define WIERSZ 4
#define KOLUMNA 4
typedef int mac[WIERSZ][KOLUMNA];


void wypelnij_tablice(mac m)
{
    srand(time(0));
    for (int i = 0; i < WIERSZ; ++i) {
        for (int j = 0; j < KOLUMNA; ++j) {
            m[i][j] = rand() % 21 - 10;
        }
    }
}

void wyswietl_tablice(mac m)
{
    printf("\nMACIERZ:\n");
    for (int i = 0; i < WIERSZ; ++i) {
        for (int j = 0; j < KOLUMNA; ++j) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

void posortuj_tablice(mac m)
{
    int n = WIERSZ * KOLUMNA; // Całkowita liczba elementów

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {

            // Przeliczenie indeksu liniowego 'j' na współrzędne [r][c]
            int r1 = j / KOLUMNA;
            int c1 = j % KOLUMNA;

            // Przeliczenie indeksu 'j+1' na współrzędne następnego elementu
            int r2 = (j + 1) / KOLUMNA;
            int c2 = (j + 1) % KOLUMNA;

            // Porównanie i zamiana
            if (m[r1][c1] > m[r2][c2]) {
                int t = m[r1][c1];
                m[r1][c1] = m[r2][c2];
                m[r2][c2] = t;
            }
        }
    }
}


int main(void)
{
    mac macierz;
    wypelnij_tablice(macierz);
    wyswietl_tablice(macierz);
    posortuj_tablice(macierz);
    wyswietl_tablice(macierz);

    return 0;
}