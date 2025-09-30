// 13.Write a program to check whether given strings are Anagram strings or not.

#include <stdio.h>
#include <string.h>

int are_anagrams(const char *s1, const char *s2) 
{
    int count[26] = {0}; 
    int i;
    char c;
    
    for (i = 0; s1[i] != '\0'; i++) 
    {
        c = tolower(s1[i]);
        if (c >= 'a' && c <= 'z') 
        {
            count[c - 'a']++;
        }
    }

    for (i = 0; s2[i] != '\0'; i++) 
    {
        c = tolower(s2[i]);
        if (c >= 'a' && c <= 'z') 
        {
            count[c - 'a']--;
        }
    }

    for (i = 0; i < 26; i++) 
    {
        if (count[i] != 0) 
        {
            return 0; 
        }
    }

    return 1;
}

int main() 
{
    char str1[] = "abccd";
    char str2[] = "cbda"; 
    char str3[] = "anagram";
    char str4[] = "nagaram";
    
    printf("Input : abccd cbda\n");

    if (are_anagrams(str1, str2)) {
        printf("Output: Strings are anagram\n");
    } else {
        printf("Output: Strings are not anagram\n");
    }
    
   
    return 0;
}

/*
    Output:     
   Input : abccd cbda
   Output: Strings are not anagram
*/