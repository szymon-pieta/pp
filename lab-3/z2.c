#include<stdio.h>

int f1(int a, int b)
{
    return a+b;
}

void f2(int a)
{
    printf("Funkcja f2() dostała wartość: %d",a);
    a=10;
    printf(" i zmieniła ją na: %d.\n",a);
}

void f3(int *a)
{
    printf("Funkcja f3() dostała wartość: %d",*a);
    *a=10;
    printf(" i zmieniła ją na: %d.\n",*a);
}

void f4(const int a)
{
    printf("Funkcja f4() dostała wartość %d, której nie może zmienić.\n",a);
}

int main(void)
{
    //Funkcję zwracającą wartość możemy wywołać wewnątrz wyrażenia.
    printf("Wynik funkcji f1(): %d\n",f1(5,3));
    int a=3;
    printf("Wartość zmiennej a przed wywołaniem funkcji f2(): %d\n",a);
    f2(a);
    printf("Wartość zmiennej a po wywołaniu funkcji f2(): %d\n",a);
    printf("Wartość zmiennej a przed wywołaniem funkcji f3(): %d\n",a);
    f3(&a);
    printf("Wartość zmiennej a po wywołaniu funkcji f3(): %d\n",a);
    printf("Wartość zmiennej a przed wywołaniem funkcji f4(): %d\n",a);
    f4(a);
    return 0;
}