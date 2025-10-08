// 19.Write a program which accept two strings from user and compare two strings. If both strings are equal then return 0 otherwise return difference between first mismatch character (Implement strcmp()).

#include <stdio.h>
#include <string.h>

int my_strcmp(const char *s1, const char *s2) 
{
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) 
    {
        s1++;
        s2++;
    }
   
    return (unsigned char)*s1 - (unsigned char)*s2;
}

int main() {
    char str1[] = "FirStr";
    char str2[] = "FirStr";
    int result;

    printf("Input : FirStr FirStr\n");

    result = my_strcmp(str1, str2);

    if (result == 0) {
        printf("Output: Both strings are equal.\n");
    } else {
        printf("Output: Strings differ by %d at the first mismatch.\n", result);
    }

    return 0;
}

/*
    Output: Both strings are equal.
*/