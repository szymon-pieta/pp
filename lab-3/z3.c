#include <stdio.h>

int max_number(const int a, const int b, const int c)
{
    return a >= b? a : b >= c ? b : c;
}

int main(void)
{
    int a, b, c;
    printf("Podaj 3 liczby calkowite:\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("Najwieksza liczba z podanych to: %d", max_number(a, b, c));

    return 0;
}