#include <stdio.h>

int main()
{
    int i1, i2, i3;
    int hun1, hun2, hun3;
    printf("Enter 3 positive integers : ");
    scanf("%d %d %d", &i1, &i2, &i3);
    if (i1 >= 0 && i2 >= 0 && i3 >= 0)
    {
        printf("The integers are : %d %d %d\n", i1, i2, i3);
        hun1 = (i1 % 1000) / 100, hun2 = (i2 % 1000) / 100, hun3 = (i3 % 1000) / 100;
        if (hun3 > hun2 && hun2 > hun1)
            printf("Yes");
        else
            printf("No");
    }
}
