#include <stdio.h>

int main() {
    double a1, q;
    int n;
    double suma = 0.0;
    double biezacy_wyraz;

    // --- 1. Pobieranie i walidacja danych (identyczne jak poprzednio) ---
    printf("--- Obliczanie sumy (pętla WHILE) ---\n");

    printf("Podaj wyraz początkowy (a1): ");
    if (scanf("%lf", &a1) != 1) {
        printf("Błąd: Niepoprawna wartość dla a1.\n");
        return 1;
    }

    printf("Podaj iloraz ciągu (q): ");
    if (scanf("%lf", &q) != 1) {
        printf("Błąd: Niepoprawna wartość dla q.\n");
        return 1;
    }

    printf("Podaj liczbę wyrazów do zsumowania (n): ");
    if (scanf("%d", &n) != 1) {
        printf("Błąd: Niepoprawna wartość dla n.\n");
        return 1;
    }

    if (n <= 0) {
        printf("Błąd: Liczba wyrazów (n) musi być dodatnia.\n");
        return 1;
    }

    // --- 2. Obliczanie sumy za pomocą pętli WHILE ---

    biezacy_wyraz = a1; // Ustawiamy pierwszy wyraz
    int i = 0;          // Inicjalizacja licznika pętli

    while (i < n) { // Pętla wykonuje się, dopóki licznik jest mniejszy od n
        suma += biezacy_wyraz;
        biezacy_wyraz *= q; // Oblicz kolejny wyraz
        i++;                // Ręczna inkrementacja licznika
    }

    // --- 3. Wyświetlenie wyniku ---
    printf("\nSuma %d wyrazów tego ciągu wynosi: %lf\n", n, suma);

    return 0;
}





// DO WHILE

#include <stdio.h>

int main() {
    double a1, q;
    int n;
    double suma = 0.0;
    double biezacy_wyraz;

    // --- 1. Pobieranie i walidacja danych (identyczne jak poprzednio) ---
    printf("--- Obliczanie sumy (pętla DO...WHILE) ---\n");

    printf("Podaj wyraz początkowy (a1): ");
    if (scanf("%lf", &a1) != 1) {
        printf("Błąd: Niepoprawna wartość dla a1.\n");
        return 1;
    }

    printf("Podaj iloraz ciągu (q): ");
    if (scanf("%lf", &q) != 1) {
        printf("Błąd: Niepoprawna wartość dla q.\n");
        return 1;
    }

    printf("Podaj liczbę wyrazów do zsumowania (n): ");
    if (scanf("%d", &n) != 1) {
        printf("Błąd: Niepoprawna wartość dla n.\n");
        return 1;
    }

    if (n <= 0) {
        printf("Błąd: Liczba wyrazów (n) musi być dodatnia.\n");
        return 1;
    }

    // --- 2. Obliczanie sumy za pomocą pętli DO...WHILE ---

    biezacy_wyraz = a1; // Ustawiamy pierwszy wyraz
    int i = 0;          // Inicjalizacja licznika pętli

    do {
        suma += biezacy_wyraz;
        biezacy_wyraz *= q;
        i++;
    } while (i < n); // Warunek sprawdzany na końcu każdej iteracji

    // --- 3. Wyświetlenie wyniku ---
    printf("\nSuma %d wyrazów tego ciągu wynosi: %lf\n", n, suma);

    return 0;
}














