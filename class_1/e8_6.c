#include <stdio.h>

int isVowel(char);
void rearrange(char[]);

int main()
{
    char word[128];
    printf("A word: ");
    gets(word);
    rearrange(word);
    printf("Rearranged word: %s", word);
}

int isVowel(char letter)
{
    char vowel_set[6] = "aeiou";
    for (int j = 0; j < 6; j++)
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
        consonant[countConsonant++] = word[i];
    }
    if (startWithVowel)
    {
        for (int j = 0; j < CountVowels; j++)
        {
            word[j] = vowels[j];
        }
        for (int i = 0, padding = CountVowels; i < countConsonant; i++)
        {
            word[i + padding] = consonant[i];
        }
        return;
    }
    for (int j = 0; j < countConsonant; j++)
    {
        word[j] = consonant[j];
    }
    for (int i = 0, j = countConsonant; i < CountVowels; i++, j++)
    {
        word[j] = vowels[i];
    }
    return;
}