#include <stdio.h>
#include <math.h>

double oblicz_pole_ostroslupa(const double a, const double H)
{
    double pole_podstawy = a * a;

    double h_sciany;
    double polowa_boku = a / 2.0;
    h_sciany = sqrt( pow(H, 2.0) + pow(polowa_boku, 2.0) );
    double pole_boczne = 2.0 * a * h_sciany;

    return  pole_podstawy + pole_boczne;
}

int main(void)
{
    double a;
    double H;
    double pole_calkowite;

    printf("Podaj długość boku podstawy (a): ");
    scanf("%lf", &a);

    printf("Podaj wysokość ostrosłupa (H): ");
    scanf("%lf", &H);


    pole_calkowite = oblicz_pole_ostroslupa(a, H);

    printf("Pole calkowite ostroslupa: %.2lf\n", pole_calkowite);

    return 0;
}