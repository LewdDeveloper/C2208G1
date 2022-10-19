#include <stdio.h>

int main()
{
    int x , *x_ptr;
    x_ptr = &x;
    do
    {
        printf("Enter a number: ");
        scanf("%d", x_ptr);
    } while (*x_ptr > 0);
}