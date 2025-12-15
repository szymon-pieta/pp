#include <stdio.h>
#include <math.h>


double szukanie_pierwiastka(const double n, const double e)
{
    double pierwiastek, poprzedni_pierwiastek;
    pierwiastek = n / 2.0;
    poprzedni_pierwiastek = 0.0;

    do {
        poprzedni_pierwiastek = pierwiastek;

        pierwiastek = 0.5 * (poprzedni_pierwiastek + (n / poprzedni_pierwiastek));

    } while (fabs(pierwiastek - poprzedni_pierwiastek) > e);
    return pierwiastek;
}

int main(void)
{
    long int n;
    double e;

    printf("Podaj niezerową liczbę naturalną (n): ");
    scanf("%ld", &n);

    if (n <= 0) {
        printf("Błąd: Liczba musi być dodatnia i niezerowa.\n");
        return 1;
    }

    printf("Podaj wymaganą dokładność (epsilon, np. 0.001): ");
    scanf("%lf", &e);
    if (e <= 0) {
        printf("Błąd: Dokładność (epsilon) musi być liczbą dodatnią.\n");
        return 1;
    }

    printf("Obliczony pierwiastek: %.10lf\n", szukanie_pierwiastka((double)n, e));

    return 0;
}