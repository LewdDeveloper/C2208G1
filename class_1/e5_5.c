#include <stdio.h>

int getSmallest(int, int, int);

int main()
{
    int a, b, c, smallest;
    do
    {
        printf("Enter 3 integers: ");
        scanf("%d %d %d", &a, &b, &c);
        smallest = getSmallest(a, b, c);
        printf("%d is the smallest.\n", smallest);
    } while (!(a == b || a == c || b == c));
}

int getSmallest(int first, int second, int third)
{
    int min;
    min = first;
    if (min > second)
    {
        min = second;
    }
    if (min > third)
    {
        min = third;
    }
    return min;
}
