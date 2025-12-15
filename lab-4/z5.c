#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 30

void uzupelnij_tablice(int t[], int tab_size)
{
    srand(time(0));
    for (int i = 0; i < tab_size; ++i) {
        t[i] = rand()%201-100;
    }
}

void wyswietl_tablice(int t[], int tab_size)
{
    for (int i = 0; i < tab_size; ++i) {
        printf("%d\t", t[i]);
    }
}

double oblicz_srednia(int t[], int tab_size)
{
    double suma_elementow = 0;
    for (int i = 0; i < tab_size; ++i) {
        suma_elementow += t[i];
    }
    return suma_elementow/tab_size;
}


// ZADANIE 4
double odchylenie_standardowe(int t[], int tab_size, int avg)
{
    double a = 0;
    for (int i = 0; i < tab_size; ++i) {
        a += pow(t[i] - avg, 2);
    }
    return sqrt(a/tab_size);
}


// ZADANIE 5
int znajdz_max_wartosc(int t[], int tab_size)
{
    int max = t[0];
    for (int i = 1; i < tab_size; ++i) {
        if (max < t[i]) {
            max = t[i];
        }
    }
    return max;
}

int znajdz_min_wartosc(int t[], int tab_size)
{
    int min = t[0];
    for (int i = 1; i < tab_size; ++i) {
        if (min > t[i]) {
            min = t[i];
        }
    }
    return min;
}



int main(void)
{
    int tab[N];

    uzupelnij_tablice(tab, N);

    wyswietl_tablice(tab, N);

    double avg = oblicz_srednia(tab, N);
    printf("Srednia wartosc elementow z tablicy: %.2lf\n", avg);

    printf("Odchylenie standardowe: %.4lf\n", odchylenie_standardowe(tab, N, avg));


    printf("Maksymalna wartosc w tablicy: %d\n", znajdz_max_wartosc(tab, N));
    printf("Minimalna wartosc w tablicy: %d\n", znajdz_min_wartosc(tab, N));

    return 0;
}