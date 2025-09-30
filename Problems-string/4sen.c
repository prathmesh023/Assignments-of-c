// 4.Write a program which accept sentences from user and print lengths of that sentences (Implement strlen()).

#include <stdio.h>
#include <string.h>

int strlen(const char *s) 
{
    int len = 0;
    while (s[len] != '\0') 
    {
        len++;
    }
    return len;
}

int main() {
    char senN[] = "India is my";
    int len;

    printf("Input : %s\n", senN);

    len = strlen(senN);

    printf("Output: %d\n", len);

    return 0;
}

/*
    Output: 11
*/