#include <stdio.h>
#include <math.h>

typedef enum {
    KARTEZJANSKI,
    BIEGUNOWY
} TypWspolrzednych;

struct uklad_kartezjanski {
    double x;
    double y;
};

struct uklad_biegunowy {
    double r;
    double kat;
};

union dane {
    struct uklad_kartezjanski kart;
    struct uklad_biegunowy bieg;
};

struct Punkt {
    TypWspolrzednych typ;
    union dane dane;
};

void naBiegunowy(struct Punkt *p) {
    if (p->typ == BIEGUNOWY) return;

    double x = p->dane.kart.x;
    double y = p->dane.kart.y;

    double r = sqrt(x * x + y * y);
    double kat = atan2(y, x);

    p->dane.bieg.r = r;
    p->dane.bieg.kat = kat;
    p->typ = BIEGUNOWY;
}

void naKartezjanski(struct Punkt *p) {
    if (p->typ == KARTEZJANSKI) return;

    double r = p->dane.bieg.r;
    double kat = p->dane.bieg.kat;

    double x = r * cos(kat);
    double y = r * sin(kat);

    p->dane.kart.x = x;
    p->dane.kart.y = y;
    p->typ = KARTEZJANSKI;
}

void wypiszPunkt(struct Punkt p) {
    if (p.typ == KARTEZJANSKI) {
        printf("Typ: KARTEZJANSKI -> x: %.2f, y: %.2f\n", p.dane.kart.x, p.dane.kart.y);
    } else {
        printf("Typ: BIEGUNOWY    -> r: %.2f, kat: %.2f rad\n", p.dane.bieg.r, p.dane.bieg.kat);
    }
}

int main() {
    struct Punkt p;
    p.typ = KARTEZJANSKI;
    p.dane.kart.x = 3.0;
    p.dane.kart.y = 4.0;

    printf("Punkt:\n");
    wypiszPunkt(p);

    printf("\nPunkt w ukladzie biegunowym\n");
    naBiegunowy(&p);
    wypiszPunkt(p);

    printf("\nPunkt w ukladzie kartezjanskim\n");
    naKartezjanski(&p);
    wypiszPunkt(p);

    return 0;
}