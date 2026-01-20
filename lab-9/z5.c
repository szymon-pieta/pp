#include <stdio.h>
#define NAZWA_PLIKU "dane_osob.txt"

typedef struct {
    char imie[50];
    char nazwisko[50];
    int wiek;
    float wzrost;
    float waga;
} Osoba;

void dodaj_osobe() {
    FILE *plik = fopen(NAZWA_PLIKU, "a");
    if (plik == NULL) {
        perror("Bład otwarcia pliku do zapisu");
        return;
    }

    Osoba nowa_osoba;

    printf("\nWprowadz dane osoby\n");
    printf("Podaj imie: ");
    scanf("%s", nowa_osoba.imie);
    printf("Podaj nazwisko: ");
    scanf("%s", nowa_osoba.nazwisko);
    printf("Podaj wiek: ");
    scanf("%d", &nowa_osoba.wiek);
    printf("Podaj wzrost (cm): ");
    scanf("%f", &nowa_osoba.wzrost);
    printf("Podaj wage (kg): ");
    scanf("%f", &nowa_osoba.waga);

    fprintf(plik, "%s %s %d %.2f %.2f\n",
            nowa_osoba.imie, nowa_osoba.nazwisko,
            nowa_osoba.wiek, nowa_osoba.wzrost, nowa_osoba.waga);

    fclose(plik);
    printf("Dodano nowa osobe\n");
}

void wyswietl_baze() {
    FILE *plik = fopen(NAZWA_PLIKU, "r");
    if (plik == NULL) {
        printf("\nBaza jest pusta lub plik nie istnieje. Dodaj kogoś najpierw.\n");
        return;
    }

    Osoba o;
    printf("\nLista osob:\n");
    printf("%-15s %-15s %-6s %-10s %-10s\n", "Imię", "Nazwisko", "Wiek", "Wzrost", "Waga");
    printf("-------------------------------------------------------------\n");

    // Pętla czyta dane tak długo, jak długo fscanf zwraca 5 poprawnie wczytanych elementów
    while (fscanf(plik, "%s %s %d %f %f",
                  o.imie, o.nazwisko, &o.wiek, &o.wzrost, &o.waga) == 5) {

        printf("%-15s %-15s %-6d %-10.1f %-10.1f\n",
               o.imie, o.nazwisko, o.wiek, o.wzrost, o.waga);
    }

    fclose(plik);
    printf("\n");
}

int main() {
    int wybor;

    while (1) {
        printf("1. Dodaj nową osobę\n");
        printf("2. Wyświetl listę osób\n");
        printf("3. Wyjście\n");
        printf("Wybór: ");

        if (scanf("%d", &wybor) != 1) {
            while(getchar() != '\n');
            continue;
        }

        switch (wybor) {
            case 1:
                dodaj_osobe();
                break;
            case 2:
                wyswietl_baze();
                break;
            case 3:
                printf("Koniec programu.\n");
                return 0;
            default:
                printf("Nieprawidłowy wybór. Spróbuj ponownie.\n");
        }
    }
    return 0;
}