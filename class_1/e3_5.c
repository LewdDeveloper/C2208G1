#include <stdio.h>

int main()
{
    int ordinal, dozen;
    int is_teen_digit;
    printf("Enter value: ");
    scanf("%d", &ordinal);
    dozen = ordinal % 100;
    is_teen_digit = dozen >= 10 && dozen <= 19;
    if (is_teen_digit)
    {
        printf("%dth", ordinal);
    }
    else
    {
        switch (ordinal % 10)
        {
        case 1:
            printf("%dst", ordinal);
            break;
        case 2:
            printf("%dnd", ordinal);
            break;
        case 3:
            printf("%drd", ordinal);
            break;
        default:
            printf("%dth", ordinal);
        }
    }
}