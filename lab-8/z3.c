#include <stdio.h>

union unia
{
    int a;
    char b;
    double c;
} u;


void check_union_size(union unia un)
{
    printf("Rozmiar unii: %llu\n", sizeof(un));
    printf("Suma rozmiarow typow zmiennych: %llu\n", sizeof(un.a) + sizeof(un.b) + sizeof(un.c));
}

int main(void)
{
    check_union_size(u);
    return 0;
}