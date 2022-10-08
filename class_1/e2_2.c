#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);
    printf("Values entered are a=%f and b=%f\n", a, b);
    a -= b;
    b += a;
    a -= b;
    printf("Values after swap are a=%f and b=%f\n", a, b);
}