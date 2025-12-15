#include <stdio.h>

int main(void)
{
    // petla for
    for (int i = 1; i <= 7; ++i) {
        printf("%d ", i);
    }

    printf("\n\n");

    // petla while
    int i = 1;
    while (i <= 7) {
        printf("%d ", i);
        ++i;
    }

    printf("\n\n");

    i = 1;
    do {
        printf("%d ", i);
        ++i;
    } while (i <= 7);


    return 0;
}