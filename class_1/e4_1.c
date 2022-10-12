#include <stdio.h>

int main()
{
    int x;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &x);
    } while (x >= 0);
}