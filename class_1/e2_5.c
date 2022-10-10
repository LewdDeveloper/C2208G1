#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, num5, sum;

    printf("Enter 5 integers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    sum = num1 + num2 + num3 + num4 + num5;
    printf("The sum: %d", sum);
    float Pnum1, Pnum2, Pnum3, Pnum4, Pnum5;
    Pnum1 = num1 * 100.0f / sum;
    Pnum2 = num2 * 100.0f / sum;
    Pnum3 = num3 * 100.0f / sum;
    Pnum4 = num4 * 100.0f / sum;
    Pnum5 = num5 * 100.0f / sum;
    printf("\nPercentage: %d(%.2f%%);", num1, Pnum1);
    printf(" %d(%.2f%%);", num2, Pnum2);
    printf(" %d(%.2f%%);", num3, Pnum3);
    printf(" %d(%.2f%%);", num4, Pnum4);
    printf(" %d(%.2f%%).", num5, Pnum5);
}