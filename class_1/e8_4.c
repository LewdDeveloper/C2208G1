#include <stdio.h>

int countWords(char[]);

int main()
{
    printf("Word count : %d\n", countWords("           Sunday, 17th               January 2019          "));
    printf("Word count : %d\n", countWords("today                          is a     good day        "));
}

int countWords(char arr[])
{
    int count = 0, in_word = 0;
    for (int i = 0; i < strlen(arr); i++)
    {
        // if (isspace(arr[i]))
        if (arr[i] == '\t' || arr[i] == '\n' || arr[i] == ' ')
        {
            in_word = 0;
            continue;
        }
        if (in_word == 0)
        {
            in_word = 1;
            count++;
        }
    }
    return count;
}
