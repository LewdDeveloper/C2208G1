#include <stdio.h>

// these are vertex
typedef struct
{
    float a;
    float b;
    float c;
} Triangle;

int isTriangle(Triangle);
int isRightTriangle(Triangle);

int main()
{
    Triangle tr;
    printf("[Triangle] Please give value of 3 vertex : ");
    scanf("%f %f %f", &tr.a, &tr.b, &tr.c);
    if (!isRightTriangle(tr))
    {
        printf("%g %g %g does NOT make a right triangle", tr.a, tr.b, tr.c);
        return;
    }
    printf("%g %g %g does make a right triangle", tr.a, tr.b, tr.c);
}

int isTriangle(Triangle tr)
{
    return (tr.a + tr.b > tr.c && tr.b + tr.c > tr.a && tr.c + tr.a > tr.b);
}

int isRightTriangle(Triangle tr)
{
    if (!isTriangle)
    {
        return 0;
    }
    return (
        (tr.a * tr.a) + (tr.b * tr.b) == (tr.c * tr.c) || (tr.b * tr.b) + (tr.c * tr.c) == (tr.a * tr.a) || (tr.c * tr.c) + (tr.a * tr.a) == (tr.b * tr.b));
    // int pow2A = tr.a * tr.a, pow2B = tr.b * tr.b, pow2C = tr.c * tr.c;
    // return (pow2A + pow2B == pow2C || pow2B + pow2C == pow2A || pow2A + pow2C == pow2B);
}