#include <stdio.h>

char a, b, max;

int main(void)
{
    puts("Podaj pojedyncze znaki zatwierdzajac je enterem");
    scanf("%c %c", &a, &b);

    max=(a>b)?a:b;

    if (a > b)
        printf("Dalej w alfabecie wystepuje znak a : %c", a);
    else
        printf("Dalej w alfabecie wystepuje znak b : %c", b);
    return 0;
}