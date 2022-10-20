#include <stdio.h>

int main()
{
    int arr[][4] = {{1, 2, 4, -2}, {-2, -3, -1, 0}};
    int min = arr[0][0];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    printf("min = %d", min);
}
