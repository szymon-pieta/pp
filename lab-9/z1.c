#include<stdio.h>


void odczyt(FILE *f)
{
    int a;
    while((a = fgetc(f)) != EOF) {
        putchar(a);
    }
}

int main(int arg_count, char *args[])
{
    if (arg_count < 2) {
        printf("Blad");
        return 1;
    }

    FILE *plik;
    plik = fopen(args[1],"r");

    if(plik == NULL) {
        printf("Błąd otwarcia pliku!\n");
        return 0;
    }

    odczyt(plik);

    if(fclose(plik)) {
        printf("Błąd zamknięcia pliku!\n");
    }

    return 0;
}