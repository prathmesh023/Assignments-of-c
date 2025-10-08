//21.Write a program which accept two strings from user and compare two strings without case sensitivity. If both strings are equal then return 0 otherwise return difference between first mismatch character (Implement stricmp()).

#include <stdio.h>
int stricmp(const char *s1, const char *s2) 
{
    while (*s1 != '\0' && *s2 != '\0') 
    {
        char c1 = tolower((unsigned char)*s1);
        char c2 = tolower((unsigned char)*s2);

        if (c1 != c2) 
        {
            return c1 - c2;
        }

        s1++;
        s2++;
    }

    
    return tolower((unsigned char)*s1) - tolower((unsigned char)*s2);
}

int main() 
{
    char str1[100];
    char str2[100];
    int result;

    printf("Enter the first string: ");
    scanf("%s", str1); 
    printf("Enter the second string: ");
    scanf("%s", str2);

    result = stricmp(str1, str2);

    if (result == 0) {
        printf("Both strings are equal.\n");
    } else {
        printf("Strings are not equal. Difference: %d\n", result);
    }

    return 0;
}

//Output 
//Enter the first string: FirStr
//Enter the second string: FiRStR
//Both strings are equal.

