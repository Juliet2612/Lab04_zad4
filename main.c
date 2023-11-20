#include <stdio.h>
#include <windows.h>
int main(int argc, char* argv[])
{
    fflush(stdout);
    fflush(stdin);
    SetConsoleOutputCP(CP_UTF8);
    printf("Operatory inkrementacji/dekrementacji - przykłady użycia\n");
    int a, b, x, y, z=0;
    x = 12;
    y = x++; // ? ?
    printf("\nx= %d\ty= %d\tz= %d", x, y,++z);
    x = 11;
    y = ++x; // ? ?
    printf("\nx= %d\ty= %d\tz= %d\n", x, y,z++);
    a = b = 8; // wartości początkowe
    printf("\n%d\t%d", a++, --b);
    printf("\n%d\t%d", a++, --b);
    printf("\n%d\t%d", a++, --b);
    printf("\n%d\t%d", a++, --b);
    printf("\n%d\t%d", a++, --b);
    printf("\n\nNaciśnij Enter, aby zakończyć...");
    fflush(stdin);
    getchar();
    return 0;
}