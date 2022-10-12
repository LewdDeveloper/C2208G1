#include <stdio.h>

int main()
{
    int x, max = 0;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &x);
        if (x > max)
        {
            max = x;
        }
    } while (x >= 0);
    printf("The maximum number is %d", max);
}