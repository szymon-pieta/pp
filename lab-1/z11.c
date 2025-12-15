#include <stdio.h>

unsigned int a, b;

int main(void)
{
    printf("Podaj dwie liczby\n");
    scanf("%d %d", &a, &b);

    // iloczyn bitowy and

    unsigned int iloczyn_bitowy = ~((~a) | (~b));
    printf("Iloczyn bitowy a i b : %u\n", iloczyn_bitowy);

    // suma bitowa or

    unsigned int suma_bitowa = ~((~a) & (~b));
    printf("Suma bitowa a i b : %u\n", suma_bitowa);

    return 0;
}