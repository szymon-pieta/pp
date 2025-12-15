#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("Podaj 3 liczby całkowite oddzielajac je spacja!\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("Najwieksza liczba jest liczba a: %d", a);
    }
    else if (b >= c) {
        printf("Najwieksza liczba jest liczba b: %d", b);
    }
    else {
        printf("Najwieksza liczba jest liczba c: %d", c);
    }

    return 0;
}