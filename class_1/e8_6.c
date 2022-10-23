#include <stdio.h>

int isVowel(char);
void rearrange(char[]);

int main()
{
    char word[128];
    printf("Please enter the lowercase word: ");
    gets(word);
    rearrange(word);
    printf("Rearranged word: %s", word);
}

int isVowel(char letter)
{
    char vowel_set[] = "aeiou";
    for (int j = 0; j < 11; j++)
    {
        if (letter == vowel_set[j])
        {
            return 1;
        }
    }
    return 0;
}

void rearrange(char word[])
{
    for (int i = 0; i < strlen(word); i++)
    {
        if (isupper(word[i]))
        {
            return;
        }
    }
    int startWithVowel = isVowel(word[0]);
    char vowels[128], consonant[128], CountVowels = 0, countConsonant = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        char letter = word[i];
        if (isVowel(letter))
        {
            vowels[CountVowels++] = letter;
            continue;
        }
        consonant[countConsonant++] = letter;
    }
    vowels[CountVowels++] = '\0', consonant[countConsonant++] = '\0';
    if (startWithVowel)
    {
        strcat(vowels, consonant);
        strcpy(word, vowels);
        return;
    }
    strcat(consonant, vowels);
    strcpy(word, consonant);
    return;
}