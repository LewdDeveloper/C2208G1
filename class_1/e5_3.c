#include <stdio.h>

double fToC(double);

int main()
{
    double f, c;
    printf("Enter temp in Fahrenheit: ");
    scanf("%Lf", &f);
    c = fToC(f);
    printf("Temp %g in Fahrenheit = %.2Lf Celsius", f, c);
}

double fToC(double f)
{
    return (f - 32) / 9 * 5;
}