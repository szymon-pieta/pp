#include <stdio.h>

int a;
int an;
int r;
int suma;

int main(void)
{
    printf("Podaj poczatkowy wyraz ciagu arytmetycznego\n");
    scanf("%d", &a);
    printf("Podaj koncowy wyraz ciagu arytmetycznego\n");
    scanf("%d", &an);
    printf("Podaj roznice wyrazow ciagu arytmetycznego\n");
    scanf("%d", &r);

    for (int i = a; i <= an; i += r) {
        suma += i;
    }

    printf("Suma wyrazow tego ciagu arytmetycznego wynosi %d", suma);

    return 0;
}