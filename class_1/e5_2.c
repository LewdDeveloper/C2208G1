#include <stdio.h>

double inchToCm(double inch) 
{
    return inch * 2.54;
}

int main() {
    double inch, cm;
    printf("Enter the distance in inches: ");
    scanf("%Lf", &inch);
    cm = inchToCm(inch);
    printf("%.2Lf inches = %.2Lf cm", inch, cm);
}