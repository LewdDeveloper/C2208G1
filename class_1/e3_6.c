#include <stdio.h>

int main()
{
    int i1, i2, i3;
    int hun1, hun2, hun3;
    printf("Enter 3 positive integers : ");
    scanf("%d %d %d", &i1, &i2, &i3);
    if (i1 >= 100 && i2 >= 100 && i3 >= 100)
    {
        printf("The integers are : %d %d %d\n", i1, i2, i3);
        hun1 = (i1 % 1000) / 100, hun2 = (i2 % 1000) / 100, hun3 = (i3 % 1000) / 100;
        if (hun3 > hun2 && hun2 > hun1)
            printf("Yes");
        else
            printf("No");
    }
    else
        printf("No"); // dozen and below has the hundred digit as 0
}
