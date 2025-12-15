#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double konwertuj_na_double(char *tekst) {
    char *ptr = strstr(tekst, ",");
    if (ptr != NULL) {
        *ptr = '.';
    }

    return atof(tekst);
}

void wypisz_z_przecinkiem(double liczba) {
    int calkowita = (int)liczba;

    double reszta = liczba - calkowita;

    int ulamkowa = (int)(reszta * 1000 + 0.5);

    if (ulamkowa < 0) ulamkowa = -ulamkowa;

    printf("Wynik: %d,%03d\n", calkowita, ulamkowa);
}

int main() {
    char input[50];
    double liczba;

    printf("Podaj liczbe z przecinkiem: ");

    scanf("%s", input);

    liczba = konwertuj_na_double(input);

    liczba = liczba + 0.001;

    wypisz_z_przecinkiem(liczba);

    return 0;
}