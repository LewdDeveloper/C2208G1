#include <stdio.h>

int countWordsSeperatedBySingleSpace(char[]);
int countWords(char[]);

int main()
{
    printf("Word count : %d\n", countWordsSeperatedBySingleSpace("a a a a a"));
    printf("Word count : %d\n", countWords("a           a           a           a\n a"));
}

int countWordsSeperatedBySingleSpace(char arr[])
{
    int count = strlen(arr), words = 0;

    for (int cursor = 0; cursor < count;)
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
    for (int cursor = 0; cursor < count;)
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
