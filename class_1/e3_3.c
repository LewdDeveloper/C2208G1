#include <stdio.h>

int main()
{
    char day;
    printf("Enter a character: ");
    scanf("%c", &day);
    switch (day)
    {
    case 'm':
        printf("It's Monday");
        break;
    case 't':
        printf("It's Tuesday");
        break;
    case 'w':
        printf("It's Wednesday");
        break;
    case 'h':
        printf("It's Thursday");
        break;
    case 'f':
        printf("It's Friday");
        break;
    case 's':
        printf("It's Saturday");
        break;
    case 'u':
        printf("It's Sunday");
        break;
    }
}