#include <stdio.h>

unsigned char a, b;
int main(void)
{
    puts("Podaj dwie liczby po spacji");
    scanf("%c %c", &a, &b);

    printf("Liczba a: %c | %x \nLiczba b: %c | %x \n", a, a, b, b);

    puts("Dzialanie and:");
    unsigned char wynik_and = a&b;
    printf("%c | %x \n", wynik_and,wynik_and);

    puts("Dzialanie or:");
    unsigned char wynik_or = a|b;
    printf("%c | %x \n", wynik_or, wynik_or);

    puts("Dzialanie xor:");
    unsigned char wynik_xor = a^b;
    printf("%c | %x \n", wynik_xor, wynik_xor);

    return 0;
}