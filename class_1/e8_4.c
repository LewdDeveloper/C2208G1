#include <stdio.h>

int countWordsSeperatedBySingleSpace(char[]);
int countWords(char[]);

int main()
{
    printf("Word count : %d\n", countWordsSeperatedBySingleSpace("Sunday, 17th January 2019"));
    printf("Word count : %d\n", countWords("a               Sunday, 17th               January 2019"));
}

int countWordsSeperatedBySingleSpace(char arr[])
{
    int count = strlen(arr), words = 0;

    for (int cursor = 0; cursor < count; cursor++)
    {
        while (!isspace(arr[cursor]))
        {
            cursor++;
        }
        if (isspace(arr[cursor]))
        {
            cursor++;
        }
        words++;
    }

    return words;
}

int countWords(char arr[])
{
    int count = strlen(arr), words = 0;
    for (int cursor = 0; cursor < count; cursor++)
    {
        while (isspace(arr[cursor]))
        {
            cursor++;
        }
        while (!isspace(arr[cursor]))
        {
            cursor++;
        }
        words++;
    }
    return words;
}
