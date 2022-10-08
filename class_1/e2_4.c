#include <stdio.h>

int main()
{
    float length, width, perimeter, area;
    printf("Rectangle: Length = ");
    scanf("%f", length);
    printf("Rectangle: Width = ");
    scanf("%f", width);
    printf("Perimeter = %f", 2 * (length + width));
    printf("Area = %f", length * width);
}
