#include <stdio.h>

int countDiv3(int[], int);

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    printf("there are %d elements divisible by 3", countDiv3(arr, 5));
}

int countDiv3(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 3 == 0)
        {
            count++;
        }
    }
    return count;
}