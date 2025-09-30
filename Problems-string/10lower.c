// 10.Write a program to convert the string from upper case to lower case (Implement strlwr()).

#include <stdio.h>
#include <string.h>

void my_strlwr(char *s) 
{
    int i = 0;
    while (s[i] != '\0') 
    {
        s[i] = tolower(s[i]);
        i++;
    }
}

int main() 
{
    char sentence[] = "DeViCe DRivEr";

    printf("Input : %s\n", sentence);

    my_strlwr(sentence);

    printf("Output: %s\n", sentence);

    return 0;
}

/*
    Output: device driver
*/