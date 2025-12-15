#include <stdio.h>

int a;

int main(void)
{
    puts("Podaj liczbe");
    scanf("%d", &a);

    if ((a & 1) == 0) {
        printf("Liczba %d jest parzysta", a);
    }
    else {
        printf("Liczba %d nie jest parzysta", a);
    }

    return 0;
}