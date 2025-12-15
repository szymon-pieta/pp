#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10


void wypelnij_tablice(int t[], int tab_size)
{
    srand(time(0));
    for (int i = 0; i < tab_size; ++i) {
        t[i] = rand()%21;
    }
}

void zamien_polowki(int t[], int tab_size)
{
    int half_size = tab_size / 2;
    int temp;
    for (int i = 0; i < half_size; ++i) {
        temp = t[half_size + i];
        t[half_size + i] = t[i];
        t[i] = temp;
    }
}

void display_tab(int t[], int tab_size)
{
    printf("\n");
    for (int i = 0; i < tab_size; ++i) {
        printf("%d\t", t[i]);
    }
    printf("\n");
}

int main(void)
{
    int tab[N];

    wypelnij_tablice(tab, N);

    display_tab(tab, N);

    zamien_polowki(tab, N);

    display_tab(tab, N);

    return 0;
}