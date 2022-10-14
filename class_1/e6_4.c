#include <stdio.h>

int main()
{
    int a, *a_ptr;
    float b, *b_ptr;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter a real number: ");
    scanf("%f", &b);
    a_ptr = &a;
    b_ptr = &b;
    printf("Values entered are %d and %f\n", *a_ptr, *b_ptr);
    while (*a_ptr < *b_ptr * (*b_ptr))
    {
        *a_ptr *= *b_ptr;
    }
    printf("Final value of a = %d", *a_ptr);
}