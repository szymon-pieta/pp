#include <stdio.h>

int a, b;

int main(void)
{
    puts("Podaj 2 liczby do podzielenia");
    scanf("%d %d", &a, &b);

    if (a % b == 0) {
        printf("%d", a);
    }
    else {
        printf("%d", b);
    }

    return 0;
}