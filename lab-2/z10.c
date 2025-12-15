#include <stdio.h>
#include <math.h> // Potrzebne dla stałej M_PI oraz funkcji sin() do porównania

int main() {
    int n; // Liczba wyrazów szeregu, którą poda użytkownik

    // Używamy stałej M_PI z biblioteki math.h dla najlepszej precyzji
    // Wartość x jest stała: PI/3
    double x = M_PI / 3.0; 
    
    double suma_szeregu = 0.0;
    double biezacy_wyraz;

    // --- 1. Pobieranie danych ---
    printf("--- Obliczanie sin(x) ze wzoru Maclaurina ---\n");
    printf("Dla x = PI/3 (ok. %.15f rad)\n", x);
    printf("Podaj, ilu wyrazów szeregu chcesz użyć do obliczeń: ");

    // --- 2. Walidacja danych ---
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Błąd: Liczba wyrazów musi być dodatnią liczbą całkowitą.\n");
        return 1; // Zakończ program z kodem błędu
    }

    // --- 3. Obliczanie sumy pętlą ---

    // Inicjalizacja:
    // Pierwszy wyraz (dla k=0) to po prostu 'x'
    biezacy_wyraz = x;
    suma_szeregu = biezacy_wyraz;

    // Pętla 'for' oblicza pozostałe (n-1) wyrazów
    // Zaczynamy od i=1, ponieważ pierwszy wyraz (i=0) już mamy.
    // 'i' odpowiada 'k' we wzorze sumacyjnym.
    for (int i = 1; i < n; i++) {
        
        // Obliczamy nowy wyraz (i) na podstawie wyrazu (i-1)
        // Wzór: W_i = W_(i-1) * (-x^2) / ( (2*i) * (2*i + 1) )
        
        // Mnożymy przez (-1)
        // Mnożymy przez (x*x)
        // Dzielimy przez (2*i) oraz (2*i + 1)
        
        // Używamy 2.0 i 1.0, aby wymusić obliczenia zmiennoprzecinkowe
        biezacy_wyraz = biezacy_wyraz * (-1.0 * x * x) / ((2.0 * i) * (2.0 * i + 1.0));
        
        // Dodajemy obliczony wyraz do sumy
        suma_szeregu += biezacy_wyraz;
    }

    // --- 4. Wyświetlenie wyników ---
    printf("\n--- Wynik ---\n");
    printf("Obliczona wartość sin(PI/3) dla %d wyrazów: %.15f\n", n, suma_szeregu);

    // Dla porównania drukujemy wartość z biblioteki systemowej
    double dokladna_wartosc = sin(x); // sin(PI/3) = sqrt(3)/2
    printf("Dokładna wartość (z biblioteki math.h):   %.15f\n", dokladna_wartosc);

    return 0; // Zakończ program pomyślnie
}