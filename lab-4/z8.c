#include <stdio.h>

#define N 5


void reverse_tab(int t[], int tab_size)
{
    int half_size = tab_size / 2;
    int temp;
    for (int i = 0; i < half_size; ++i) {
        temp = t[tab_size - 1 - i];
        t[tab_size - 1 - i] = t[i];
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

    printf("Wprowadz %d elementów do tablicy:\n", N);
    for (int i = 0; i < N; ++i) {
        printf("%d/%d:", i + 1 , N);
        scanf("%d", &tab[i]);
    }

    display_tab(tab, N);
    reverse_tab(tab, N);
    display_tab(tab, N);

    return 0;
}