#include <string.h>
#include <stdio.h>
int main(void)
{
    char ciag[] = "Tekst do podzialu na slowa (nie znaki). Np: Ala ma - kota i psa";
    char znaki_podzialu[] = " .-:()";
    char * token;
    printf( "Podzial tekstu \"%s\" na pojedyncze wyrazy:\n", ciag );
    token = strtok( ciag, znaki_podzialu );
    while( token != NULL ) {
        printf( "%s\n", token );
        token = strtok( NULL, znaki_podzialu );
    }
    return 0;
}