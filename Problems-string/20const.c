// 20.Write a program which accept two strings from user and compare only first N characters of two strings. If both strings are equal till first N characters then return 0 otherwise return difference between first mismatch character (Implement strncmp()).

#include <stdio.h>
#include <string.h>

int my_strncmp(const char *s1, const char *s2, int n) 
{
    int i = 0;
    while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) 
    {
        i++;
    }
    
    if (i == n) 
    {
        return 0; 
    }

    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

int main() {
    char str1[] = "FirStr";
    char str2[] = "FirNew";
    int n = 3;
    int result;

    printf("Input : FirStr FirNew 3\n");

    result = my_strncmp(str1, str2, n);

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