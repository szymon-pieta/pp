#include <stdio.h>
#include <string.h>

#define SIZE 1000

void zamien_wszystkie(char *tekst, char *wzorzec, char *zamiennik, char *wynik) {
    char *aktualna_pozycja = tekst;
    char *znaleziony;

    while ((znaleziony = strstr(aktualna_pozycja, wzorzec)) != NULL) {
        // A. Obliczamy ile znaków jest PRZED znalezionym wzorcem
        int dlugosc_fragmentu = znaleziony - aktualna_pozycja;
        // B. Doklejamy do wyniku ten fragment oryginalnego tekstu
        strncat(wynik, aktualna_pozycja, dlugosc_fragmentu);
        // C. Doklejamy zamiennik zamiast wzorca
        strcat(wynik, zamiennik);
        // D. Przesuwamy wskaźnik czytający ZA znaleziony wzorzec
        aktualna_pozycja = znaleziony + strlen(wzorzec);
    }

    // Doklejamy resztę tekstu do wyniku
    strcat(wynik, aktualna_pozycja);
    printf("%s\n", wynik);
}

int main() {
    char tekst[SIZE];
    char wzorzec[100];
    char zamiennik[100];
    char wynik[SIZE] = "";

    printf("Podaj tekst zrodlowy: ");
    fgets(tekst, SIZE, stdin);
    tekst[strcspn(tekst, "\n")] = '\0';

    printf("Podaj wzorzec do usuniecia: ");
    fgets(wzorzec, 100, stdin);
    wzorzec[strcspn(wzorzec, "\n")] = '\0';

    printf("Podaj tekst wstawiany: ");
    fgets(zamiennik, 100, stdin);
    zamiennik[strcspn(zamiennik, "\n")] = '\0';

    zamien_wszystkie(tekst, wzorzec, zamiennik, wynik);
    return 0;
}