#include <stdio.h>

int main()
{
    int sum = 0;
    for (int x = 9; x <= 300; x++)
    {
        if (x % 7 == 0 && x % 63 != 0)
        {
            sum += x;
        }
    }
    printf("Sum of integers between 9 & 300 that are divisible by 7 but not by 63 is : %d", sum);
}