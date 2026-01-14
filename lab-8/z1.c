#include<stdio.h>

struct struktura
{
    unsigned char a,b,c,d;
    unsigned int x;
} s;

union unia
{
    unsigned char a,b,c,d;
    unsigned int x;
} u;

int main(void)
{
    printf("Rozmiar struktury: %u\n",sizeof(s));
    printf("Rozmiar unii: %u\n",sizeof(u));
    s.x = u.x = 0xabcd; // Zapis liczby szesnastkowej
    printf("Wartości w strukturze: %u %u %u %u %u\n",s.a,s.b,s.c,s.d,s.x);
    printf("Wartości w unii: %u %u %u %u %u\n",u.a,u.b,u.c,u.d,u.x);
    return 0;
}