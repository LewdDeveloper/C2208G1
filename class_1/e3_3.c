#include <stdio.h>

int main()
{
    char day;
    printf("Enter a character: ");
    scanf("%c", &day);
    switch (day)
    {
    case 'm':
    case 'M':
        printf("It's Monday");
        break;
    case 't':
    case 'T':
        printf("It's Tuesday");
        break;
    case 'w':
    case 'W':
        printf("It's Wednesday");
        break;
    case 'h':
    case "H":
        printf("It's Thursday");
        break;
    case 'f':
    case 'F':
        printf("It's Friday");
        break;
    case 's':
    case 'S':
        printf("It's Saturday");
        break;
    case 'u':
    case 'U':
        printf("It's Sunday");
        break;

    }
}