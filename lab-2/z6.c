#include <stdio.h>

int main() {
    double a1, q; // Wyraz początkowy (a1) i iloraz (q)
    int n;          // Liczba wyrazów do zsumowania (n)

    double suma = 0.0;
    double biezacy_wyraz; // Przechowuje aktualny wyraz ciągu

    // --- 1. Pobieranie danych od użytkownika ---

    printf("--- Obliczanie sumy ciągu geometrycznego ---\n");

    printf("Podaj wyraz początkowy (a1): ");
    // Sprawdzanie poprawności danych wejściowych
    if (scanf("%lf", &a1) != 1) {
        printf("Błąd: Wprowadzono niepoprawną wartość dla a1.\n");
        return 1; // Zakończ program z kodem błędu
    }

    printf("Podaj iloraz ciągu (q): ");
    // Sprawdzanie poprawności danych wejściowych
    if (scanf("%lf", &q) != 1) {
        printf("Błąd: Wprowadzono niepoprawną wartość dla q.\n");
        return 1;
    }

    printf("Podaj liczbę wyrazów do zsumowania (n): ");
    // Sprawdzanie poprawności danych wejściowych
    if (scanf("%d", &n) != 1) {
        printf("Błąd: Wprowadzono niepoprawną wartość dla n.\n");
        return 1;
    }

    // --- 2. Sprawdzanie poprawności logicznej danych ---
    
    if (n <= 0) {
        printf("Błąd: Liczba wyrazów (n) musi być dodatnia.\n");
        return 1;
    }

    // --- 3. Obliczanie sumy za pomocą pętli ---
    // (Zgodnie z poleceniem, bez użycia wzoru na sumę Sn)

    biezacy_wyraz = a1; // Zaczynamy od pierwszego wyrazu

    // Używamy pętli 'for', która wykona się 'n' razy
    for (int i = 0; i < n; i++) {
        // Dodaj aktualny wyraz do sumy
        suma += biezacy_wyraz;
        
        // Oblicz kolejny wyraz ciągu na potrzeby następnej iteracji
        biezacy_wyraz = biezacy_wyraz * q;
    }

    // --- 4. Wyświetlenie wyniku ---

    printf("\nSuma %d wyrazów tego ciągu wynosi: %lf\n", n, suma);

    return 0; // Zakończ program pomyślnie
}