#include <stdio.h>
#include <string.h>

#define SIZE 200

void wyodrebnij_protokol(char *url, char *protokol) {
    char *separator;

    separator = strstr(url, "://");

    if (separator != NULL) {
        int dlugosc_protokolu = separator - url;

        strncpy(protokol, url, dlugosc_protokolu);

        protokol[dlugosc_protokolu] = '\0';

        printf("Identyfikator protokolu: %s\n", protokol);
    } else {
        printf("W tym adresie nie podano protokolu (brak '://').\n");
    }
}

int main() {
    char url[SIZE];
    char protokol[50];

    printf("Podaj adres URL: ");

    fgets(url, SIZE, stdin);
    url[strcspn(url, "\n")] = '\0';

    printf("Wczytany adres: %s\n", url);

    wyodrebnij_protokol(url, protokol);
    return 0;
}