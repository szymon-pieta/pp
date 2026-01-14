#include <stdio.h>

struct struktura
{
    int a;
    char c;
    double d;
} s;


void check_struck_size(struct struktura st)
{
    printf("Rozmiar struktury: %llu\n", sizeof(st));
    printf("Suma rozmiarow typow zmiennych: %llu\n", sizeof(st.a) + sizeof(st.c) + sizeof(st.d));
}


int main(void)
{
    check_struck_size(s);
    return 0;
}