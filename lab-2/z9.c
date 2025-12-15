#include <stdio.h>

int main() {
    int n;
    long long silnia = 1; // Wynik. 'long long' dla dużych liczb.
                         // Inicjalizujemy jako 1 (kluczowe dla 0! i 1!)

    printf("--- Obliczanie silni (pętla WHILE) ---\n");
    printf("Podaj liczbę z zakresu [0, 10]: ");
    
    // Sprawdzenie, czy wczytanie się powiodło
    if (scanf("%d", &n) != 1) {
        printf("Błąd: To nie jest poprawna liczba całkowita.\n");
        return 1;
    }

    // --- Instrukcja warunkowa (walidacja zakresu) ---
    if (n < 0 || n > 10) {
        printf("Błąd: Liczba musi być w zakresie [0, 10].\n");
    } else {
        // --- Obliczanie silni ---
        int i = n; // Zaczynamy odliczanie od n

        // Pętla 'while' wykonuje się, dopóki i jest większe od 1
        while (i > 1) {
            silnia = silnia * i; // silnia *= i;
            i--;                 // i = i - 1;
        }

        // Wyświetlenie wyniku (dla long long używamy %lld)
        printf("Silnia z %d wynosi: %lld\n", n, silnia);
    }

    return 0;
}








/// DO WHILE


#include <stdio.h>

int main() {
    int n;
    long long silnia = 1; 
    int i; // Zmienna licznika

    printf("--- Obliczanie silni (pętla DO...WHILE) ---\n");
    printf("Podaj liczbę z zakresu [0, 10]: ");
    
    if (scanf("%d", &n) != 1) {
        printf("Błąd: To nie jest poprawna liczba całkowita.\n");
        return 1;
    }

    // --- Instrukcja warunkowa (walidacja zakresu) ---
    if (n < 0 || n > 10) {
        printf("Błąd: Liczba musi być w zakresie [0, 10].\n");
    } else {
        // --- Obliczanie silni ---
        i = n;

        // Używamy 'if', aby pętla 'do...while' nie uruchomiła się
        // błędnie dla n=0 (bo wykonałaby się raz).
        if (n > 0) {
            do {
                silnia *= i;
                i--;
            } while (i > 0); // Warunek sprawdzany na końcu
                             // Musi być 'i > 0' aby pomnożyć przez 1
        }
        
        // (Jeśli n=0, ten 'if' jest pomijany, a 'silnia' zostaje 1)

        printf("Silnia z %d wynosi: %lld\n", n, silnia);
    }

    return 0;
}