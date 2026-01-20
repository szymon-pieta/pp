#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 4

void zapisz_macierz(FILE *plik)
{
    srand(time(0));
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            int liczba = (rand()%21) - 10;
            fprintf(plik, "%d ", liczba);
        }
        fprintf(plik, "\n");
    }
}

void odczytaj_macierz(FILE *plik)
{
    int liczba;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (fscanf(plik, "%d", &liczba) == 1) {
                printf("%4d", liczba);
            }
        }
        printf("\n");
    }
}

int main(void)
{
    FILE *plik;

    plik = fopen("macierz.txt", "w");

    if (plik == NULL) {
        printf("Blad odczytu pliku");
        return 0;
    }

    zapisz_macierz(plik);

    fclose(plik);

    plik = fopen("macierz.txt", "r");

    if (plik == NULL) {
        printf("Blad odczytu pliku");
        return 0;
    }

    odczytaj_macierz(plik);

    fclose(plik);

    return 0;
}