#include <stdio.h>

int main()
{
    printf("Enter 5 integers: ");
    int numbers[5];
    int sum = 0;
    scanf("%d %d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);
    sum = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];
    printf("The Sum: %d\n", sum);
    printf("Percentage: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d (%d%%); ", numbers[i], numbers[i] * 100 / sum);
    }
    printf("\n");
}