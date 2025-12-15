#include <stdio.h>

int a;

int main(void)
{
    printf("Podaj wartosc liczby a: ");
    scanf("%d", &a);

    switch(a) {
        case 1: puts("Jeden");
            break;
        case 2: puts("Dwa");
            break;
        case 3: puts("Trzy");
            break;
        default: puts("Inna wartość");
    }

    return 0;
}