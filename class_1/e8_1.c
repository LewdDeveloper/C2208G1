#include <stdio.h>

int main()
{
    char first[128], middle[128], last[128];
    printf("Please enter your first name : ");
    gets(first);
    printf("Please enter your last name : ");
    gets(last);
    printf("Please enter your middle name : ");
    gets(middle);
    printf("F M L format: %s %s %s\n", first, middle, last);
    printf("L M F format: %s %s %s", last, middle, first);
}