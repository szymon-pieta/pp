#include <stdio.h>

#define N 4

double horner(int t[], int tab_size, double x)
{
    double wynik = 0;

    for (int i = 0; i < tab_size; ++i) {
        wynik *= x;
        wynik += t[i];
    }

    return wynik;
}


int main(void)
{
    int tab[N];
    double x;

    printf("Wprowadz 4 wspolczynniki wielomianu do tablicy:\n");
    for (int i = 0; i < N; ++i) {
        printf("%d/%d:", i +1 , N);
        scanf("%d", &tab[i]);
    }

    printf("Podaj wartosc x:");
    scanf("%lf", &x);

    double wynik = horner(tab, N, x);

    printf("Wynik obliczony wzorem Hornera: %.4lf", wynik);

    return 0;
}