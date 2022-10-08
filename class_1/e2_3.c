#include <stdio.h>

int main()
{
    float f, c;
    printf("Enter temp in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) / 9 * 5;
    printf("Temp %.2f in Fahrenheit = %.2f Celsius", f, c);
}