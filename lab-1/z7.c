#include <stdio.h>

int a, b;

int main(void)
{
    puts("Podaj 2 liczby do podzielenia");
    scanf("%d %d", &a, &b);

    int wynik = a / b;

    printf("Wynik dzielenia %d przez %d: %d", a, b, wynik);

    return 0;
}