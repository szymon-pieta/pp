#include <stdio.h>

int main() {
    double a1, an, r; // Wyraz początkowy, końcowy, różnica
    double suma = 0.0;

    printf("--- Sumowanie ciągu arytmetycznego (wersja skrócona) ---\n");

    printf("Podaj wyraz początkowy (a1): ");
    scanf("%lf", &a1); // Pomijamy walidację dla zwięzłości kodu

    printf("Podaj wyraz końcowy (an): ");
    scanf("%lf", &an);

    printf("Podaj różnicę (r): ");
    scanf("%lf", &r);

    // --- NAJKRÓTSZY KOD LICZĄCY SUMĘ (ZAD. 8) ---
    // Obsługujemy r=0 osobno, aby uniknąć nieskończonej pętli
    if (r == 0) {
        if (a1 == an) { // Tylko jeśli ciąg jest "poprawny" (np. 5, 5, 5)
             suma = a1; 
        }
        // Jeśli r=0 ale a1 != an (np. a1=5, an=10), to ciąg
        // nigdy nie osiągnie 'an', więc suma pozostaje 0.
    } else {
        // Używamy operatora trójargumentowego (?) do dynamicznej
        // zmiany warunku pętli w zależności od znaku 'r'.
        for (double i = a1; (r > 0) ? (i <= an) : (i >= an); i += r) {
            suma += i;
        }
    }
    // ------------------------------------------------

    printf("\nSuma ciągu wynosi: %lf\n", suma);

    return 0;
}