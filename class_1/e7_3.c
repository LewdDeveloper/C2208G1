#include <stdio.h>

int greatestSum(int[], int);

int main()
{
    int arr[] = {38, 39, -8, 7, 6, 37};
    printf("the greatest sum is %d", greatestSum(arr, 6));
}

int greatestSum(int arr[], int size)
{
    if (size < 1)
    {
        return 0;
    }
    int i;
    int highestNumIndex = 0, min = arr[0], sum = arr[0];
    for (i = 1; i < size; i++)
    {
        // find largest number
        if (arr[i] > sum)
        {
            sum = arr[i];
            highestNumIndex = i;
        }
        // find smallest number
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    if (size > 1)
    {
        for (i = 0; i < size; i++)
        {
            // find second largest number
            if (arr[i] > min && i != highestNumIndex)
            {
                min = arr[i];
            }
        }
    }
    else
    {
        min = 0;
    }
    sum += min;
    return sum;
}
