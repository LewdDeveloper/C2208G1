#include <stdio.h>

int main()
{
    int size = 4;
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};
    int even_diagonals[] = {1, 1};

    for (int a = 0, d = (size - 1); a < size; a++, d--)
    {
        even_diagonals[0] *= arr[a][a];
        even_diagonals[1] *= arr[a][d];
    }
    printf("First product is %d, second product is %d", even_diagonals[0], even_diagonals[1]);
}
