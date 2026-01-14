#include <stdio.h>
#include <string.h>

struct Tosoba {
    char imie[15];
    char nazwisko[20];
    int wiek;
};

void sortuj_osoby(struct Tosoba tab[], int rozmiar) {
    int i, j, min_idx;
    struct Tosoba temp;

    for (i = 0; i < rozmiar - 1; i++) {
        min_idx = i;

        for (j = i + 1; j < rozmiar; j++) {

            int porownanie_nazwiska = strcmp(tab[j].nazwisko, tab[min_idx].nazwisko);

            if (porownanie_nazwiska < 0 || (porownanie_nazwiska == 0 && strcmp(tab[j].imie, tab[min_idx].imie) < 0)) {
                min_idx = j;
            }
        }

        if (min_idx != i) {
            temp = tab[i];
            tab[i] = tab[min_idx];
            tab[min_idx] = temp;
        }
    }
}

int main(void) {
    int LICZBA_OSOB = 4;
    struct Tosoba osoby[LICZBA_OSOB];
    int i;

    for (i = 0; i < LICZBA_OSOB; i++) {
        printf("Podaj dane osoby nr %d:\n", i + 1);
        printf(" Imie: ");
        scanf("%s", osoby[i].imie);
        printf(" Nazwisko: ");
        scanf("%s", osoby[i].nazwisko);
        printf(" Wiek: ");
        scanf("%d", &osoby[i].wiek);
        printf("\n");
    }

    printf("Wprowadzone dane:\n");
    for (i = 0; i < LICZBA_OSOB; i++) {
        printf("%s %s, wiek: %d\n", osoby[i].imie, osoby[i].nazwisko, osoby[i].wiek);
    }

    sortuj_osoby(osoby, LICZBA_OSOB);

    printf("\nPosortowane dane:\n");
    for (i = 0; i < LICZBA_OSOB; i++) {
        printf("%s %s, wiek: %d\n", osoby[i].imie, osoby[i].nazwisko, osoby[i].wiek);
    }

    return 0;
}