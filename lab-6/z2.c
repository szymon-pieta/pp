#include <stdio.h>
#include <string.h>


int czy_slowo_jest_palindromem(char slowo[])
{
    int length = strlen(slowo);
    int half_length = length / 2;

    for (int i = 0; i < half_length; ++i) {
        if (slowo[i] != slowo[length - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    char ciag[40];
    printf("Wpisz slowo, aby sprawdzic czy jest palindromem: \n");
    scanf("%[^\n]s", ciag);

    if (czy_slowo_jest_palindromem(ciag)) {
        printf("Slowo \'%s\' jest palindromem\n", ciag);
    }
    else {
        printf("Slowo \'%s\' NIE jest palindromem\n", ciag);
    }

    return 0;
}