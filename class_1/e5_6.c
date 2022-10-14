#include <stdio.h>

int getMagic(int);

int main()
{
    int a, b, ma, mb;
    printf("Enter 1st value: ");
    scanf("%d", &a);
    ma = getMagic(a);
    printf("Magic number = %d\n", ma);
    printf("Enter 2nd value: ");
    scanf("%d", &b);
    mb = getMagic(b);
    printf("Magic number = %d\n", mb);
}

int getMagic(int number)
{
    int total = 0;
    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 != 0)
        {
            total += number % 10;
        }
        number /= 10;
    }
    return total % 10;
}
