// 17.Write a program which accept two strings from user and append second string after first string (Implement strcat()).

#include <stdio.h>
#include <string.h>

char* my_strcat(char *destination, const char *source) 
{
    char *ptr = destination;
    while (*ptr != '\0') 
    {
        ptr++;
    }

    while (*source != '\0') 
    {
        *ptr = *source;
        ptr++;
        source++;
    }

    *ptr = '\0';
    return destination;
}

int main() 
{
    char str1[100] = "FirStr "; 
    char str2[] = "SecStr";

    printf("Input : FirStr SecStr\n");

    my_strcat(str1, str2);

    printf("Output: %s\n", str1);

    return 0;
}

/*
    Output: FirStr SecStr
*/