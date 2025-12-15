#include <stdio.h>

int obliczanie_ciag_arytmetyczny(const int a, const int an, const int r)
{
    int suma = 0;
    for (int i = a; i <= an; i += r) {
        suma += i;
    }

   return suma;
}

int obliczanie_ciag_geometryczny(const int a, const int an, const int r)
{
    int suma = 0;
    for (int i = a; i <= an; i *= r) {
        suma += i;
    }

    return suma;
}

int main(void)
{
    char wybor;
    do {
        printf("Wybierz ktory ciag liczb chcesz obliczyc\n");
        printf("A - arytmetyczny, G - geometryczny\n");
        scanf("%c", &wybor);
    } while (wybor != 'A' && wybor != 'G');

    int a;
    int an;
    int r;
    int suma = 0;

    printf("Podaj poczatkowy wyraz ciagu\n");
    scanf("%d", &a);
    printf("Podaj koncowy wyraz ciagu\n");
    scanf("%d", &an);
    if (wybor == 'A') {
        printf("Podaj roznice wyrazow ciagu\n");
    }
    else {
        printf("Podaj iloczyn wyrazow ciagu\n");
    }
    scanf("%d", &r);

    suma = wybor == 'A' ? obliczanie_ciag_arytmetyczny(a, an, r) : obliczanie_ciag_geometryczny(a, an, r);

    if (wybor == 'A') {
        printf("Suma ciagu arytmetycznego wynosi: ");
    }
    else {
        printf("Suma ciagu geometrycznego wynosi: ");
    }
    printf("%d\n", suma);

    return 0;
}