// 18.Write a program which accept two strings from user and append N characters of second string after first string (Implement strncat()).

#include <stdio.h>
#include <string.h>

char* my_strncat(char *destination, const char *source, int n) 
{
    char *ptr = destination;
    while (*ptr != '\0') 
    {
        ptr++;
    }


    int count = 0;
    while (*source != '\0' && count < n) 
    {
        *ptr = *source;
        ptr++;
        source++;
        count++;
    }

    *ptr = '\0';
    return destination;
}

int main() 
{
    char str1[100] = "FirStr "; 
    char str2[] = "SecStr4";
    int n = 4; 
    printf("Input : FirStr SecStr 4\n");

    my_strncat(str1, str2, n);

    printf("Output: %s\n", str1);

    return 0;
}

/*
    Output: FirStr SecS
*/