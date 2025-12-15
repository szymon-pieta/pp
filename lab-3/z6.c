#include <stdio.h>

double oblicz_pole_powierzchni_prostopadloscianu(const double h, const double w, const double d)
{
    double pole_podstaw = 2.0 * (w * d);
    double pole_scian1 = 2.0 * (w * h);
    double pole_scian2 = 2.0 * (d * h);

    return  pole_podstaw + pole_scian1 + pole_scian2;
}

int main(void)
{
    double wysokosc, szerokosc, glebokosc;
    double pole_powierzchni;

    printf("Podaj wysokość: ");
    scanf("%lf", &wysokosc);

    printf("Podaj szerokość: ");
    scanf("%lf", &szerokosc);

    printf("Podaj głębię (lub długość): ");
    scanf("%lf", &glebokosc);

    pole_powierzchni = oblicz_pole_powierzchni_prostopadloscianu(wysokosc, szerokosc, glebokosc);

    printf("\nPole powierzchni prostopadłościanu wynosi: %lf\n", pole_powierzchni);

    return 0;
}