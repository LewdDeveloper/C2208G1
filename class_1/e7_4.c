#include <stdio.h>

// refer e7_4_test.md
int sumLast3(int[], int);

int main()
{
    int arr[] = {-1, 2, -3, 4, -5, 6, -7, 8, 9, 10};
    printf("Sum of last 3 array element = %d", sumLast3(arr, 10));
}

int sumLast3(int arr[], int size)
{
    int k = (size - 1);
    int sum = 0;
    if (k >= 0)
    {
        for (int i = k; i > k - 3 && i >= 0; i--)
        {
            sum += arr[i];
        }
    }
    return sum;
}