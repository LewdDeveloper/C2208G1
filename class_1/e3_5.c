#include <stdio.h>

int main()
{
    int ordinal, teen;
    printf("Enter value: ");
    scanf("%d", &ordinal);
    teen = (ordinal % 100) / 10 == 1;
    if (teen)
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