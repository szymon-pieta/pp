#include <stdio.h>

int a;

int main(void)
{
    printf("Podaj od ilu odliczyć do startu rakiety: \n");
    scanf("%d", &a);

    for (int i = a; i >= 0; i--) {
        switch (i) {
            case 10:
                puts("dziesiec");
                break;
            case 9:
                puts("dziewiec");
                break;
            case 8:
                puts("osiem");
                break;
            case 7:
                puts("siedem");
                break;
            case 6:
                puts("szesc");
                break;
            case 5:
                puts("piec");
                break;
            case 4:
                puts("cztery");
                break;
            case 3:
                puts("trzy!");
                break;
            case 2:
                puts("DWA!");
                break;
            case 1:
                puts("JEDEN!!");
                break;
            case 0:
                puts("ZERO!!!");
                break;
            default:
                puts("rakiet wybuchua");
        }

    }

    return 0;
}