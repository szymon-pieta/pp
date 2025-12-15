#include <stdio.h>

unsigned char a;

int main(void)
{
    printf("%d \n", a);
    a -= 1;
    printf("%d \n", a);

    return 0;
}