#include <stdio.h>
#include <string.h>

#define MAX 1024

void porownaj_pliki(FILE *f1, FILE *f2, char *nazwa1, char *nazwa2) {
    char b1[MAX], b2[MAX];
    char *p1, *p2;
    int nr_linii = 1;

    while (1) {
        p1 = fgets(b1, MAX, f1);
        p2 = fgets(b2, MAX, f2);

        if (p1 == NULL && p2 == NULL) break;

        int sa_rozne = 0;

        if ((p1 == NULL && p2 != NULL) || (p1 != NULL && p2 == NULL)) {
            sa_rozne = 1;
        }
        else if (p1 != NULL && p2 != NULL && strcmp(b1, b2) != 0) {
            sa_rozne = 1;
        }

        if (sa_rozne) {
            printf("Różnica w linii %d\n", nr_linii);
            printf("%s: %s", nazwa1, p1 ? b1 : "<KONIEC PLIKU>\n");
            printf("%s: %s", nazwa2, p2 ? b2 : "<KONIEC PLIKU>\n");
        }

        nr_linii++;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uzycie: %s <plik1> <plik2>\n", argv[0]);
        return 1;
    }

    FILE *plik1 = fopen(argv[1], "r");
    FILE *plik2 = fopen(argv[2], "r");

    if (!plik1 || !plik2) {
        printf("Błąd: Nie można otworzyć jednego z plików.\n");
        if (plik1) fclose(plik1);
        if (plik2) fclose(plik2);
        return 1;
    }


    porownaj_pliki(plik1, plik2, argv[1], argv[2]);


    fclose(plik1);
    fclose(plik2);

    return 0;
}