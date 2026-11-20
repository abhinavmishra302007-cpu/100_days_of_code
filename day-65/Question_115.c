// Write a program to take two strings s and t as inputs (assume all characters are lowercase).
//  The task is to determine if s and t are valid anagrams,
//  meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000], t[1000];
    printf("Enter string s: ");
    scanf("%s", s);
    printf("Enter string t: ");
    scanf("%s", t);

    if (strlen(s) != strlen(t))
    {
        printf("Not Anagram\n");
        return 0;
    }

    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    int flag = 1;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Anagram\n");
    }
    else
    {
        printf("Not Anagram\n");
    }

    return 0;
}