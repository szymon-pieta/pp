#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NAZWA_PLIKU "liczby.txt"
#define ILOSC_LICZB 20

void losowanie_wartosci(FILE * plik)
{
    srand(time(NULL));

    for (int i = 0; i < ILOSC_LICZB; i++) {
        int liczba = (rand() % 21) - 10;
        fprintf(plik, "%d ", liczba);
    }
}

void znajdz_min_max(FILE *plik, int *min_liczba, int *max_liczba)
{
    int liczba = 0, min = 0, max = 0;

    printf("Liczby zapisane w pliku: \n");
    if (fscanf(plik, "%d", &liczba) == 1) {
        min = liczba;
        max = liczba;
        printf("%d ", liczba);

        while (fscanf(plik, "%d", &liczba) == 1) {
            printf("%d ", liczba);

            if (liczba > max) {
                max = liczba;
            }
            if (liczba < min) {
                min = liczba;
            }
        }
    }

    *min_liczba = min;
    *max_liczba = max;
}

int main() {
    FILE *plik;
    int min, max;

    plik = fopen(NAZWA_PLIKU, "w");
    if (plik == NULL) {
        perror("Błąd otwarcia pliku do zapisu");
        return 1;
    }

    losowanie_wartosci(plik);
    fclose(plik);

    plik = fopen(NAZWA_PLIKU, "r");
    if (plik == NULL) {
        perror("Błąd otwarcia pliku do odczytu");
        return 1;
    }


    znajdz_min_max(plik, &min, &max);

    printf("\nNajwieksza liczba: %d\n", max);
    printf("Najmniejsza liczba: %d\n", min);

    fclose(plik);
    return 0;
}