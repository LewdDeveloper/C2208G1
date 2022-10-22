#include <stdio.h>

int main()
{
    char input[128];
    printf("Enter input : ");
    gets(input);
    int i = 0, sum = 0;
    while (input[i] != '\0' && input[i] != '*')
    {
        if (isdigit(input[i]))
        {
            sum += input[i] - '0'; // we lookup ASCII table :)
        }
        i++;
    }

    printf("Sum = %d", sum);
}