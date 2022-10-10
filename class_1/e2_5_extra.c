#include <stdio.h>

int main()
{
    printf("Enter 5 integers: ");
    int numbers[5];
    int count = 0, sum = 0;

    char line[1024] = "";
    scanf("%1024[^\n]", line);
    char *start = line;
    char *end;

    while (1)
    {
        numbers[count] = strtol(start, &end, 10);
        sum += numbers[count];
        if (start == end)
            break;
        start = end;
        count++;
    }
    printf("The Sum: %d\n", sum);
    printf("Percentage: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d (%f%%); ", numbers[i], numbers[i] * 100.f / sum);
    }
    printf("\n");
}