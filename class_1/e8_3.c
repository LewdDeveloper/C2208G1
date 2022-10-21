#include <stdio.h>

// need strtol
int main()
{
    // we don't have to handle for negative number in this excersise
    char input[10];
    printf("Enter input : ");
    gets(input);
    int i = 0, sum = 0;
    while (input[i] != '\0' && input[i] != '*')
    {
        switch (input[i++])
        {
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            sum += input[i];
            break;
        default:
            continue;
        }
    }

    printf("Sum = %d", sum);
}