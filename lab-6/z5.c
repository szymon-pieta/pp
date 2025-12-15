#include <stdio.h>
#include <string.h>

#define MAX_SLOW 50
#define MAX_ZNAKOW 200

void wypisz_odwrotnie(char *zdanie) {
    char *wyrazy[MAX_SLOW];
    int licznik = 0;
    char *token = strtok(zdanie, " \n");

    while (token != NULL && licznik < MAX_SLOW) {
        wyrazy[licznik] = token; // Zapisujemy "adres" słowa w tablicy
        licznik++; // Zwiększamy licznik znalezionych słów

        token = strtok(NULL, " \n");
    }

    printf("Odwrocona kolejnosc wyrazow: ");
    for (int i = licznik - 1; i >= 0; i--) {
        printf("%s", wyrazy[i]);

        if (i > 0) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    char input[MAX_ZNAKOW];

    printf("Wpisz zdanie: ");

    if (fgets(input, MAX_ZNAKOW, stdin) != NULL) {
        wypisz_odwrotnie(input);
    }

    return 0;
}