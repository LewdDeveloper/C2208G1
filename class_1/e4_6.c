#include <stdio.h>

int main()
{
    int x, factorial = 1;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &x);
        if (x < 0)
        {
            printf("You should enter a positive number!\n");
            continue;
        }
        for (int y = 1; y <= x; y++)
        {
            factorial *= y;
        }
        break;
    } while (1);
    printf("%d! = %d", x, factorial);
}