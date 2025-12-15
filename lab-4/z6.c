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
double oblicz_odchylenie_standardowe(int t[], int tab_size, int avg)
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


// ZADANIE 6
void wypisz_elementy(int t[], int tab_size, double avg, double odchylenie)
{
    printf("Elementy tablicy mniejsze od roznicy avg - odchylenie (%lf):\n", avg-odchylenie);
    for (int i = 1; i < tab_size; ++i) {
        if (t[i] < avg - odchylenie)
            printf("%d\t", t[i]);
    }
    printf("\n");

    printf("Elementy tablicy wieksze od sumy avg + odchylenie (%lf):\n", avg+odchylenie);
    for (int i = 1; i < tab_size; ++i) {
        if (t[i] > avg + odchylenie)
            printf("%d\t", t[i]);
    }
    printf("\n");
}



int main(void)
{
    int tab[N];

    uzupelnij_tablice(tab, N);

    wyswietl_tablice(tab, N);

    double avg = oblicz_srednia(tab, N);
    printf("Srednia wartosc elementow z tablicy: %.2lf\n", avg);

    double odchylenie_standardowe = oblicz_odchylenie_standardowe(tab, N, avg);
    printf("Odchylenie standardowe: %.4lf\n", odchylenie_standardowe);


    printf("Maksymalna wartosc w tablicy: %d\n", znajdz_max_wartosc(tab, N));
    printf("Minimalna wartosc w tablicy: %d\n", znajdz_min_wartosc(tab, N));

    wypisz_elementy(tab, N, avg, odchylenie_standardowe);

    return 0;
}