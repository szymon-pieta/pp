#include <stdio.h>
#include <string.h>
#define WIERSZ 10
#define KOLUMNA 50
typedef char tab[WIERSZ][KOLUMNA];


void wypisz_tablice(tab t)
{
    printf("\nWYRAZY:\n");
    for (int i = 0; i < WIERSZ; ++i) {
        printf("%s", t[i]);
    }
    printf("\n");
}

void wypisz_najdluzsze_slowo(tab t)
{
    char* najdlusze_slowo = &t[0][0];
    int dlugosc = strlen(najdlusze_slowo);
    int dlugosc2 = 0;
    for (int i = 1; i < WIERSZ; ++i) {
        dlugosc2 = strlen(t[i]);
        if (dlugosc2 > dlugosc) {
            najdlusze_slowo = t[i];
            dlugosc = dlugosc2;
        }
    }

    printf("\nNajdlusze znalezione slowo to %s", najdlusze_slowo);
}

int main(void)
{
    tab tablica;

    printf("Podaj 10 wyrazow:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Wyraz %d: ", i + 1);
        fgets(tablica[i], 50, stdin);
    }

    wypisz_tablice(tablica);

    wypisz_najdluzsze_slowo(tablica);

    return 0;
}