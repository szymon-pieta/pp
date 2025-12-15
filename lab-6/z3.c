#include <stdio.h>
#include <string.h>

#define SIZE 40

int czy_slowa_sa_anagramami(const char *slowo1, const char *slowo2)
{
    int length1 = strlen(slowo1);
    int length2 = strlen(slowo2);

    if (length1 != length2) {
        return 0;
    }

    int licznik[52] = {0};
    int i;

    for (i = 0; i < length1; i++) {
        if (slowo1[i] >= 'a' && slowo1[i] <= 'z') {
            licznik[slowo1[i] - 'a']++;
        } else if (slowo1[i] >= 'A' && slowo1[i] <= 'Z') {
            licznik[slowo1[i] - 'A' + 26]++;
        }
    }

    for (i = 0; i < length2; i++) {
        if (slowo2[i] >= 'a' && slowo2[i] <= 'z') {
            licznik[slowo2[i] - 'a']--;
        } else if (slowo2[i] >= 'A' && slowo2[i] <= 'Z') {
            licznik[slowo2[i] - 'A' + 26]--;
        }
    }

    for (i = 0; i < 52; i++) {
        if (licznik[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    char slowo1[SIZE];
    char slowo2[SIZE];

    printf("Podaj pierwsze słowo: ");
    if (scanf("%39s", slowo1) != 1) {
        printf("Błąd\n");
        return 1;
    }

    printf("Podaj drugie słowo: ");
    if (scanf("%39s", slowo2) != 1) {
        printf("Błąd\n");
        return 1;
    }

    if (czy_slowa_sa_anagramami(slowo1, slowo2)) {
        printf("Słowa \"%s\" i \"%s\" SĄ anagramami.\n", slowo1, slowo2);
    } else {
        printf("Słowa \"%s\" i \"%s\" NIE SĄ anagramami.\n", slowo1, slowo2);
    }
    return 0;
}