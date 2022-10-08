#include <stdio.h>

int main()
{
    int a = 123, b = -123, c = 12345;
    printf("%2d\n", c);
    printf("%10.2d\n", c);
    printf("%-10.2d\n", c);
    printf("%-7d\n", a);
    printf("%07.2d\n", a);
    printf("%07d\n", a);
    printf("%+0−9.4d\n", a);
    printf("%+09.4d\n", a);
    printf("%+07d\n", a);
    printf("%+07.4d\n", a);
    printf("%+-07.4d\n", a);
    printf("%-08d\n", b);
    printf("%-08.2d\n", b);
    printf("%-8.4d\n", b);
}