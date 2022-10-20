#include <stdio.h>

int isPartOf(int, int[], int);
int isSubset(int arrA[], int, int[], int);

int main()
{
    // int arrA[] = {37, 13, 37, 10, 9, 11};
    // int arrB[] = {37, 0, 13, 37, 3, 10, 9};
    int arrA[] = {37, 13, 37, 10, 9};
    int arrB[] = {37, 0, 13, 37, 3, 10, 9};
    if (isSubset(arrA, 5, arrB, 7))
    {
        printf("arrA is a subset of arrB");
    }
    else
    {
        printf("arrA is NOT a subset of arrB");
    }
}

int isPartOf(int x, int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (x == arr[i])
        {
            return 1;
        }
    }
    return 0;
}

int isSubset(int arrA[], int sizeA, int arrB[], int sizeB)
{
    for (int i = 0; i < sizeA; i++)
    {
        if (!(isPartOf(arrA[i], arrB, sizeB)))
        {
            return 0;
        }
    }
    return 1;
}