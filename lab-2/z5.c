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


    int i = a;
    while (i <= an) {
        suma += i;
        i += r;
    }
    printf("Suma wyrazow tego ciagu arytmetycznego wynosi %d\n", suma);

    suma = 0;
    i = a;
    do {
        suma += i;
        i += r;
    }  while (i <= an);
    printf("Suma wyrazow tego ciagu arytmetycznego wynosi %d", suma);


    return 0;
}