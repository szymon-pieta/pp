#include<stdio.h>


void wypisz_komentarze(FILE *f)
{
    int c, nastepny;
    while ((c = fgetc(f)) != EOF) {
        if (c == '/') {
            nastepny = fgetc(f);

            if (nastepny == '/') {
                printf("//");
                while ((c = fgetc(f)) != EOF && c != '\n') {
                    putchar(c);
                }
                putchar('\n');
            }
            else if (nastepny == '*') {
                printf("/*");
                int ostatni = 0;
                while ((c = fgetc(f)) != EOF) {
                    putchar(c);
                    if (ostatni == '*' && c == '/') {
                        break;
                    }
                    ostatni = c;
                }
                putchar('\n');
            }
            else {
                ungetc(nastepny, f);
            }
        }
    }
}

int main()
{
    FILE *plik;
    plik = fopen(__FILE__,"r");

    if(plik == NULL) {
        printf("Błąd otwarcia pliku!\n");
        return 0;
    }

    wypisz_komentarze(plik);

    if(fclose(plik)) {
        printf("Błąd zamknięcia pliku!\n");
    }

    return 0;
}