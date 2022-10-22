#include <stdio.h>

// need strtol
int main()
{
    // we don't have to handle for negative number in this excersise
    char input[128];
    printf("Enter input : ");
    gets(input);
    int i = 0, sum = 0;
    while (input[i] != '\0' && input[i] != '*')
    {
        switch (input[i++])
        {
        // case '1':
        //     sum += 1;
        //     break;
        // case '2':
        //     sum += 2;
        //     break;
        // case '3':
        //     sum += 3;
        //     break;
        // case '4':
        //     sum += 4;
        //     break;
        // case '5':
        //     sum += 5;
        //     break;
        // case '6':
        //     sum += 6;
        //     break;
        // case '7':
        //     sum += 7;
        //     break;
        // case '8':
        //     sum += 8;
        //     break;
        // case '9':
        //     sum += 9;
        //     break;
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            sum += atoi(input[i]);
        default:
            continue;
        }
    }

    printf("Sum = %d", sum);
}