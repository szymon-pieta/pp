#include <stdio.h>
#include <math.h> // Dołączamy, aby móc porównać wynik z funkcją sqrt()

int main() {
    double x; // Nieujemna liczba rzeczywista
    int n;      // Liczba powtórzeń (iteracji)

    double pierwiastek; // Nasze kolejne przybliżenia (z)

    printf("--- Obliczanie pierwiastka (Metoda Newtona) ---\n");

    // --- 1. Pobieranie liczby (x) ---
    printf("Podaj nieujemną liczbę rzeczywistą: ");
    if (scanf("%lf", &x) != 1) {
        printf("Błąd: Wprowadzono niepoprawny format liczby.\n");
        return 1; // Zakończ z błędem
    }

    // --- 2. Walidacja liczby (x) ---
    if (x < 0) {
        printf("Błąd: Liczba musi być nieujemna.\n");
        return 1;
    }

    // --- 3. Pobieranie liczby powtórzeń (n) ---
    printf("Podaj liczbę powtórzeń (iteracji): ");
    if (scanf("%d", &n) != 1) {
        printf("Błąd: Wprowadzono niepoprawny format liczby iteracji.\n");
        return 1;
    }

    // --- 4. Walidacja liczby powtórzeń (n) ---
    if (n < 0) {
        // n=0 jest technicznie dozwolone, zwróci po prostu
        // początkowe przybliżenie, ale n<0 jest błędem.
        printf("Błąd: Liczba powtórzeń nie może być ujemna.\n");
        return 1;
    }

    // --- 5. Obliczenia ---

    // Obsługa przypadku specjalnego, aby uniknąć dzielenia przez zero
    if (x == 0.0) {
        pierwiastek = 0.0;
    } else {
        // Wybieramy przybliżenie początkowe (z0)
        // Wybór '1.0' jest prosty i bezpieczny dla dowolnego x > 0
        pierwiastek = 1.0; 

        // Pętla 'for' wykonuje się 'n' razy
        for (int i = 0; i < n; i++) {
            // Zastosowanie wzoru Newtona: z = 0.5 * (z + x / z)
            pierwiastek = 0.5 * (pierwiastek + x / pierwiastek);
        }
    }

    // --- 6. Wyświetlenie wyniku ---
    printf("\n--- Wynik ---\n");
    printf("Przybliżony pierwiastek po %d iteracjach: %.15f\n", n, pierwiastek);

    // Wyświetlamy wynik z biblioteki math.h dla porównania
    printf("Wartość kontrolna (z funkcji sqrt()): %.15f\n", sqrt(x));

    return 0; // Zakończ pomyślnie
}