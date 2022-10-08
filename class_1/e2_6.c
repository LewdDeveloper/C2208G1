#include <stdio.h>

int main()
{
    // problem was : loss of precision
    // int a,b, c;
    // a = 2.45;
    // b = a+2;
    // scanf("%d",&c);
    // printf("%d %d %d\n", a, b, c);
    float a, b, c;
    a = 2.45;
    b = a + 2;
    scanf("%f", &c);
    printf("%f %f %f\n", a, b, c);
    return 0;
}