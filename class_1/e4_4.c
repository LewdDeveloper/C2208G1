#include <stdio.h>

int main()
{
    int x, min = 0, max = 0, sum = 0, count = 0;
    float avg = 0;
    do
    {
        printf("Enter a positive integer : ");
        scanf("%d", &x);
        if (x < 0)
        {
            break;
        }
        count++;
        if (count == 1)
        {
            min = x;
            max = x;
        }
        else
        {
            if (x > max)
            {
                max = x;
            }
            if (x < min)
            {
                min = x;
            }
        }
        sum += x;
        avg = 1.0f * sum / count;
    } while (1);
    printf("Number of positive values entered is %d\n", count);
    printf("Maximum value entered is %d\n", max);
    printf("Minimum value entered is %d\n", min);
    printf("Average value is %f", avg);
}