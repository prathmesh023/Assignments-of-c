// 15.Write a program which accept string from user and copy first N characters into some destination string (Implement strncpy()).

#include <stdio.h>
#include <string.h>

char* my_strncpy(char *destination, const char *source, int n) 
{
    int i;
    for (i = 0; i < n && source[i] != '\0'; i++) 
    {
        destination[i] = source[i];
    }
    destination[i] = '\0'; 
    return destination;
}

int main() {
    char source[] = "India is my 8";
    char destination[100];
    int n = 8; 

    printf("Input : India is my 8\n");

    my_strncpy(destination, source, n);

    printf("Output: %s\n", destination);

    return 0;
}

/*
    Output: India is
*/