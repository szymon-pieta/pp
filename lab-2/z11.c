#include <stdio.h>
#include <math.h> // Dołączamy dla stałej M_PI do porównania

int main() {
    int n; // Liczba wyrazów szeregu, którą poda użytkownik

    double suma_szeregu = 0.0;
    double mianownik = 1.0; // Zaczyna się od 1
    double znak = 1.0;      // Zaczyna się od +1.0

    // --- 1. Pobieranie danych ---
    printf("--- Obliczanie PI z Szeregu Leibniza ---\n");
    printf("Podaj, ilu wyrazów szeregu chcesz użyć do obliczeń: ");

    // --- 2. Walidacja danych ---
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Błąd: Liczba wyrazów musi być dodatnią liczbą całkowitą.\n");
        return 1; // Zakończ program z kodem błędu
    }

    // --- 3. Obliczanie sumy pętlą 'for' ---
    // Pętla wykona się 'n' razy
    for (int i = 0; i < n; i++) {
        
        // Dodaj kolejny wyraz: znak * (1 / mianownik)
        // np. (1.0 * (1/1.0)), (-1.0 * (1/3.0)), (1.0 * (1/5.0)) ...
        suma_szeregu += znak / mianownik;
        
        // Przygotuj wartości dla następnej iteracji:
        // Zmień znak na przeciwny
        znak *= -1.0; 
        // Zwiększ mianownik o 2
        mianownik += 2.0; 
    }

    // --- 4. Obliczenie końcowego wyniku ---
    // Wzór Leibniza oblicza PI/4, więc mnożymy sumę przez 4
    double przyblizenie_pi = 4.0 * suma_szeregu;

    // --- 5. Wyświetlenie wyników ---
    printf("\n--- Wynik ---\n");
    printf("Przybliżona wartość PI dla %d wyrazów: %.15f\n", n, przyblizenie_pi);

    // Dla porównania drukujemy wartość z biblioteki systemowej
    printf("Dokładna wartość PI (z biblioteki math.h): %.15f\n", M_PI);

    return 0; // Zakończ program pomyślnie
}