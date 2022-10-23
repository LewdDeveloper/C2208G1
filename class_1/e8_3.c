#include <stdio.h>

int main()
{
    char input[128];
    printf("Enter input : ");
    gets(input);
    int i = 0, sum = 0;
    while (input[i] != '\0' && input[i] != '*')
    {
        // if (isdigit(input[i]))
        if (input[i] >= '0' && input[i] <= '9')
        {
            sum += input[i] - '0';
        }
        i++;
    }

    printf("Sum = %d", sum);
}