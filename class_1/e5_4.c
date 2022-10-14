#include <stdio.h>

// https://learn.microsoft.com/en-us/office/troubleshoot/excel/determine-a-leap-year
int isLeapYear(int);

int main()
{
    int year, is_leap_year;
    do
    {
        printf("Enter a year: ");
        scanf("%d", &year);
        if (year <= 0)
        {
            break;
        }
        is_leap_year = isLeapYear(year);
        if (is_leap_year)
        {
            printf("It is a LEAP year.\n");
        }
        else
        {
            printf("It is NOT a leap year.\n");
        }
    } while (1);
}

int isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
