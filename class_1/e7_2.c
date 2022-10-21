#include <stdio.h>

int isAscending(int[], int);

int main()
{
    int arr[] = {1, 3, 7, 8, 9};
    // {1, -1, 5, 7, 9};
    if (isAscending(arr, 5))
    {
        printf("Elements are in ascending order");
    }
    else 
    {
        printf("Elements are NOT in ascending order");
    }
}

int isAscending(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (max > arr[i])
        {
            return 0;
        }
        max = arr[i];
    }
    return 1;
}