#include <stdio.h>

int countWordsSeperatedBySingleSpace(char[]);
int countWords(char[]);

int main()
{
    printf("Word count : %d\n", countWordsSeperatedBySingleSpace("today                          is a     good day"));
    printf("Word count : %d", countWords("today                          is a     good day"));
}

int countWordsSeperatedBySingleSpace(char arr[])
{
    int count = strlen(arr);
    int words = 0;
    int wasLastCharNotSpace = 1;
    for (int i = 0; i < count; i++)
    {
        if (arr[i] == ' ' && wasLastCharNotSpace)
        {
            wasLastCharNotSpace = 0;
            words++;
            continue;
        }
        wasLastCharNotSpace = 1;
    }
    return words;
}
int countWords(char arr[])
{
    int count = strlen(arr);
    int words = 0;
    return 0;
}
