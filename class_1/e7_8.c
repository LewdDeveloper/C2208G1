#include <stdio.h>

void partition(int[], int, int);

// constexpr never exist (copium)

int main()
{
    int size = 5;
    int arr[] = {37, 13, 37, 10, 9};
    int pivot = 11;

    printf("Less than or equal %d: ", pivot);
    for (int i = 0; i < size; i++)
    {
        if (pivot >= arr[i])
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\nGreater than or equal %d: ", pivot);
    for (int i = 0; i < size; i++)
    {
        if (pivot < arr[i])
        {
            printf("%d ", arr[i]);
        }
    }
    partition(arr, size, pivot);
    printf("\nModified array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void partition(int arr[], int size, int pivot)
{
    int shallow[5], j = 0, k = (size - 1);
    for (int i = 0; i < size; i++)
    {
        shallow[i] = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (pivot < shallow[i])
        {
            arr[k - i] = shallow[i];
        }
        else
        {
            arr[j] = shallow[i];
            j++;
        }
    }
    return;
}