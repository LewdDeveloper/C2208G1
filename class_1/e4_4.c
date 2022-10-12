#include <stdio.h>

int main()
{
    int x, min, max, sum = 0, count = 0;
    do
    {
        printf("Enter a positive integer : ");
        scanf("%d", &x);
        if (x < 0)
            break;
        if (!max || x > max)
        {
            max = x;
        }
        if (!min || x < min)
        {
            min = x;
        }
        sum += x;
        count++;
    } while (1);
    printf("Number of positive values entered is %d\n", count);
    printf("Maximum value entered is %d\n", max);
    printf("Minimum value entered is %d\n", min);
    printf("Average value is %f", 1.0f * sum / count);
}