#include <stdio.h>

int main()
{
    int x, attempt = 0;
    do
    {
        printf("Enter age: ");
        scanf("%d", &x);
        attempt++;
    } while (!(x >= 1 && x <= 100));
    printf("Number of attempts = %d", attempt);
}