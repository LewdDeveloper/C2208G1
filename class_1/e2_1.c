#include <stdio.h>

int main()
{
    float inch;
    printf("Enter the distance in inches: ");
    scanf("%f", &inch);
    printf("%.2f inches = %.2f cm\n", inch, inch * 2.54);
}