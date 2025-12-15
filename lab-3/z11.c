#include <stdio.h>

int main(void)
{
    char ciag[10];
    int i;
    int znaleziono = 0;

    printf("Podaj ciąg 10 znaków ('a' lub 'b').\n");

    for (i = 0; i < 10; i++) {
        printf("Podaj znak %d/10: ", i + 1);
        scanf(" %c", &ciag[i]);

        if (ciag[i] != 'a' && ciag[i] != 'b') {
            printf("Błędny znak! Proszę podać tylko 'a' lub 'b'.\n");
            i--;
            continue;
        }
    }

    printf("\nWprowadzony ciąg: ");
    for (i = 0; i < 10; i++) {
        printf("%c", ciag[i]);
    }
    printf("\n");

    for (i = 0; i <= 6; i++) {
        if (ciag[i]   == 'a' && ciag[i+1] == 'b' && ciag[i+2] == 'b' && ciag[i+3] == 'a') {
            znaleziono = 1;
            break;
        }
    }

    if (znaleziono == 1) {
        printf("Znaleziono sekwencję 'abba'!\n");
    } else {
        printf("Nie znaleziono sekwencji 'abba'.\n");
    }
    return 0;
}