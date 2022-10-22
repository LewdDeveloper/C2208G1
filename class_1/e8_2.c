// https://youtu.be/JJmL6Kxwmlw?t=4841

#include <stdio.h>

int main()
{
    char container[3][128], min[128], max[128];
    for (int i = 0; i < 3; i++)
    {
        printf("Please enter the lowercase string: ");
        gets(container[i]);
    }
    strcpy(min, container[0]);
    strcpy(max, container[0]);
    for (int i = 1; i < 3; i++)
    {
        if (strcmp(container[i], max) > 0)
        {
            strcpy(max, container[i]);
        }
        if (strcmp(container[i], min) < 0)
        {
            strcpy(min, container[i]);
        }
    }
    printf("The first string is: %s\n", min);
    printf("The last string is: %s", max);
}