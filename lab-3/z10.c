#include <stdio.h>

unsigned int obliczReszte(unsigned int a, unsigned int b) {
    while (a >= b) {
        a = a - b;
    }
    return a;
}

int main(void)
{
    unsigned int a, b, reszta;

    printf("Podaj dzielną (a, liczba naturalna niezerowa): ");
    scanf("%u", &a);
    if (a == 0) {
        printf("Błąd: Liczba musi być niezerowa.\n");
        return 1;
    }

    printf("Podaj dzielnik (b, liczba naturalna niezerowa): ");
    scanf("%u", &b);
    if (b == 0) {
        printf("Błąd: Dzielnik musi być niezerowy.\n");
        return 1;
    }

    reszta = obliczReszte(a, b);

    printf("\nWynik: %u %% %u = %u\n", a, b, reszta);
    printf("Weryfikacja (wg operatora %%): %u\n", a % b);

    return 0;
}