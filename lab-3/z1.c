#include<stdio.h>


int f1(void)
{
    puts("Jestem funkcją f1(), zwracam wartość 5.");
    return(5);
}

int f2()
{
    puts("Jestem funkcją f2(), zwracam wartość 4.");
    return 4;
}

void f3(void)
{
    puts("Jestem funkcją f3() i nic nie zwracam.");
}

void f4()
{
    puts("Jestem funkcją f4() i też nic nie zwracam.");
}

void f5(void)
{
    puts("Jestem funkcją f5().");
    return;
    puts("Nic nie zwracam i nie wypiszę tego komunikatu.");
}

void f6(void); //Prototyp funkcji

int main(void)
{
    int a=f1(); //Wywołujemy funkcję f1() i przypisujemy wartość, którą
    //zwróciła do zmiennej a.
    printf("Wartość zmiennej a: %d\n",a);
    (void)f1(); //Wywołujemy funkcję f1() i ignorujemy to co zwróciła.
    f2(); //Wywołujemy funkcję f2() i ignorujemy to co zwróciła.
    //a=f3(); Tak nie wolno wywołać funkcji f3()!
    f3();
    f4();
    f5();
    f6();
    return 0;
}

void f6(void)
{
    puts("Jestem funkcją f6(). Zostałam zdefiniowana po funkcji main().");
}