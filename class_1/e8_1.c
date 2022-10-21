#include <stdio.h>

int main()
{
    char first[10], middle[10], last[10];
    printf("Please enter your first name : ");
    gets(first);
    printf("Please enter your last name : ");
    gets(last);
    printf("Please enter your middle name : ");
    gets(middle);
    printf("F M L format: %s %s %s\n", first, middle, last);
    printf("L M F format: %s %s %s", last, middle, first);
}