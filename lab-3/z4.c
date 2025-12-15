#include <stdio.h>


void wyswietl_nazwe_dnia_tygodnia(const int a)
{
    switch (a) {
        case 1:
            puts("poniedzialek");
            break;
        case 2:
            puts("wtorek");
            break;
        case 3:
            puts("sroda");
            break;
        case 4:
            puts("czwartek");
            break;
        case 5:
            puts("piatek");
            break;
        case 6:
            puts("sobota");
            break;
        case 7:
            puts("niedziela");
            break;
        default:
            puts("nie ma takiego numeru dnia tygodnia");
    }

}

int main(void)
{
    int a;
    printf("Podaj numer dnia tygodnia (1-7):\n");
    scanf("%d", &a);

    wyswietl_nazwe_dnia_tygodnia(a);

    return 0;
}