#include <stdio.h>

int greatestSum(int[], int);

int main()
{
    int arr[] = {38, 39, -8, 7, 6, 37};
    printf("the greatest sum is %d", greatestSum(arr, 1));
}

int greatestSum(int arr[], int size)
{
    switch (size)
    {
    case 0:
        return 0;
    case 1:
        return arr[0];
    case 2:
        return arr[0] + arr[1];
    default:
        if (size < 0)
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
                // skip the highest number index on next iteration
                highestNumIndex = i;
            }
            // find smallest number
            else if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        for (i = 0; i < size; i++)
        {
            // find second (or n) largest number
            if (arr[i] > min && i != highestNumIndex)
            {
                min = arr[i];
            }
        }
        sum += min;
        return sum;
    }
}
