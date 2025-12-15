#include <stdio.h>



void f()
{
    enum WARTOSCI {A, B, C, D = 8, E = 8, F = 11, G = 23, H = 55};
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);
    printf("%d\n", D);
    printf("%d\n", E);
    printf("%d\n", F);
    printf("%d\n", G);
    printf("%d\n", H);
}


int main(void)
{
    f();
    return 0;
}