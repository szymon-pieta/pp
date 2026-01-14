#include <stdio.h>

struct liczba_zespolona
{
    double Re;
    double Im;
};

struct liczba_zespolona dodaj(struct liczba_zespolona liczba1, struct liczba_zespolona liczba2)
{
    struct liczba_zespolona wynik = {0, 0};

    wynik.Re = liczba1.Re + liczba2.Re;
    wynik.Im = liczba1.Im + liczba2.Im;

    return wynik;
}

struct liczba_zespolona odejmij(struct liczba_zespolona liczba1, struct liczba_zespolona liczba2)
{
    struct liczba_zespolona wynik = {0, 0};

    wynik.Re = liczba1.Re - liczba2.Re;
    wynik.Im = liczba1.Im - liczba2.Im;

    return wynik;
}

struct liczba_zespolona mnozenie(struct liczba_zespolona liczba1, struct liczba_zespolona liczba2)
{
    struct liczba_zespolona wynik = {0, 0};

    wynik.Re = (liczba1.Re * liczba2.Re) - (liczba1.Im * liczba2.Im);
    wynik.Im = (liczba1.Re * liczba2.Im) + (liczba1.Im * liczba2.Re);

    return wynik;
}

struct liczba_zespolona dzielenie(struct liczba_zespolona liczba1, struct liczba_zespolona liczba2)
{
    struct liczba_zespolona wynik = {0, 0};

    wynik.Re = ((liczba1.Re * liczba2.Re) + (liczba1.Im * liczba2.Im)) / ((liczba2.Re * liczba2.Re) + (liczba2.Im * liczba2.Im));
    wynik.Im = ((liczba1.Re * liczba2.Im) - (liczba1.Im * liczba2.Re)) / ((liczba2.Re * liczba2.Re) + (liczba2.Im * liczba2.Im));;

    return wynik;
}

int main(void)
{
    struct liczba_zespolona liczba1 = {0, 0};
    struct liczba_zespolona liczba2 = {0, 0};
    struct liczba_zespolona wynik = {0, 0};

    printf("Wprowadz wartosc Re dla 1. liczby: ");
    scanf(" %lf", &liczba1.Re);

    printf("Wprowadz wartosc Im dla 1. liczby: ");
    scanf( "%lf", &liczba1.Im);

    printf("\nWprowadz wartosc Re dla 2. liczby: ");
    scanf(" %lf", &liczba2.Re);

    printf("Wprowadz wartosc Im dla 2. liczby: ");
    scanf(" %lf", &liczba2.Im);


    printf("\n");
    printf("Liczba 1: Re:%.2lf Im:%.2lf\n", liczba1.Re, liczba1.Im);
    printf("Liczba 2: Re:%.2lf Im:%.2lf\n", liczba2.Re, liczba2.Im);


    int wybor = 0;
    do {
        printf("\n1.Dodawanie, 2.Odejmowanie, 3.Mnozenie, 4.Dzielenie: ");
        scanf("%u", &wybor);
    } while (wybor < 1 || wybor > 4);

    switch (wybor) {
        case 1:
            wynik = dodaj(liczba1, liczba2);
            break;
        case 2:
            wynik = odejmij(liczba1, liczba2);
            break;
        case 3:
            wynik = mnozenie(liczba1, liczba2);
            break;
        case 4:
            wynik = dzielenie(liczba1, liczba2);
            break;
        default:
            perror("wybrana niedostepna opcja");
            return 1;
    }

    printf("\nObliczona liczba: Re:%.2lf Im:%.2lf\n", wynik.Re, wynik.Im);

    return 0;
}