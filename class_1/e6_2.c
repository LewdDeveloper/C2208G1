#include <stdio.h>

int main()
{
    int start = 9, *start_ptr = &start;
    int sum = 0, *sum_ptr = &sum;
    for (start_ptr; *start_ptr <= 300; (*start_ptr)++)
    {
        if (*start_ptr % 7 == 0 && *start_ptr % 63 != 0)
        {
            *sum_ptr += (*start_ptr);
        }
    }
    printf("Sum of integers between 9 & 300 that are divisible by 7 but not by 63 is %d", *sum_ptr);
}