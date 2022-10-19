#include <stdio.h>

// refer e7_4_test.md
int sumLast3(int[], int);

int main()
{
    int arr[] = {-1, 2, -3, 4, -5, 6, -7, 8, 9, 10};
    printf("Sum of last 3 array element = %d", sumLast3(arr, 10));
}

// incase it wasn't obvious, in C array index starts from 0
//                           note for people coming from lua background.
int sumLast3(int arr[], int size)
{
    int sum = 0, j = 0;
    for (int i = (size - 1); i >= 0 && j < 3; i--, j++)
    {
        sum += arr[i];
    }
    return sum;
}