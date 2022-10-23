#include <stdio.h>
int isPalindrome(char[]);

// https://en.wikipedia.org/wiki/Palindrome
// https://en.cppreference.com/w/c/string/byte/isalnum

int main()
{
    char word[128];
    printf("Enter word: ");
    gets(word);
    if (isPalindrome(word))
    {
        printf("%s is a palindrome.", word);
    }
    else
    {
        printf("%s is not a palindrome.", word);
    }
}

int isPalindrome(char str[])
{
    int count = strlen(str);
    int l = 0, r = count - 1;
    while (l < count)
    {
        int l_notAlphaNum, r_notAlphaNum;
        // (str[l] >= '0' && str[l] <= '9') || (str[l] >= 'A' && str[l] <= 'Z') || (str[l] >= 'a' && str[l] <= 'z')
        l_notAlphaNum = !isalnum(str[l]);
        r_notAlphaNum = !isalnum(str[r]);
        if (!(l_notAlphaNum || r_notAlphaNum))
        {
            // if (letter >= 'A' && letter <= 'Z') { return letter + 32; } return letter;
            if (tolower(str[l]) != tolower(str[r]))
            {
                return 0;
            }
            l++;
            r--;
        }
        if (l_notAlphaNum)
        {
            l++;
        }
        if (r_notAlphaNum)
        {
            r--;
        }
    }
    return 1;
}
