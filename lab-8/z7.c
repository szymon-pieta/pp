#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Punkt {
    int x;
    int y;
};


void wypelnij_tablice(struct Punkt tab[], int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        tab[i].x = (rand() % 21) - 10;
        tab[i].y = (rand() % 21) - 10;
    }
}

void wypisz_tablice(struct Punkt tab[], int size)
{
    printf("Punkty w tablicy:\n");

    for (int i = 0; i < size; i++) {
        printf("Punkt %d: [%d, %d]\n", i, tab[i].x, tab[i].y);
    }
    printf("\n");
}


void znajdz_najbardziej_oddalone_punkty(struct Punkt tab[], int size, int* index1, int* index2)
{
    double max_dystans = 0.0;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {

            double dx = tab[i].x - tab[j].x;
            double dy = tab[i].y - tab[j].y;
            double aktualny_dystans = dx*dx + dy*dy;

            if (aktualny_dystans > max_dystans) {
                max_dystans = aktualny_dystans;
                *index1 = i;
                *index2 = j;
            }
        }
    }
}


int main() {
    struct Punkt tablica[10];
    int index1 = 0;
    int index2 = 0;

    wypelnij_tablice(tablica, 10);
    wypisz_tablice(tablica, 10);

    znajdz_najbardziej_oddalone_punkty(tablica, 10, &index1, &index2);

    printf("Najbardziej oddalone punkty to:\n");
    printf("Punkt %d [%d, %d] oraz Punkt %d [%d, %d]\n",
           index1, tablica[index1].x, tablica[index1].y,
           index2, tablica[index2].x, tablica[index2].y);

    return 0;
}