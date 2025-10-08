// 16.Write a program which accept string from user and accept number N then copy last N character into some another string.

#include <stdio.h>
#include <string.h>

void copy_last_n(char *destination, const char *source, int n) 
{
    int len = strlen(source);
    int start_index;

    if (n >= len) 
    {
        start_index = 0; 
    } else 
    {
        start_index = len - n; 
    }

    strcpy(destination, source + start_index);
}

int main() 
{
    char source[] = "India is my 5";
    char destination[100];
    int n = 5; 

    printf("Input : India is my 5\n");

    copy_last_n(destination, source, n);

    printf("Output: %s\n", destination);

    return 0;
}

/*
    Output: is my
*/