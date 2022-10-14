#include <stdio.h>

int containDigit7(int);
int sumWithout7(int);

int main()
{
    int n, result;
    printf("Enter n: ");
    scanf("%d", &n);
    result = sumWithout7(n);
    printf("Sum without 7 is: %d", result);
}

int containDigit7(int number)
{
    while (number > 0)
    {
        if (number % 10 == 7)
        {
            return 1;
        }
        number /= 10;
    }
    return 0;
}

int sumWithout7(int number)
{
    int total = 0;
    for (int i = 1; i <= number; i++)
    {
        if (!containDigit7(i))
        {
            total += i;
        }
    }
    return total;
}