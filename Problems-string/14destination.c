// 14.Write a program which accept string from user and copy that string into some another string (Implement strcpy()).

#include <stdio.h>
#include <string.h>

char* my_strcpy(char *destination, const char *source) 
{
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; 
    return destination;
}

int main() {
    char source[] = "India is my";
    char destination[100];

    printf("Input : %s\n", source);

    my_strcpy(destination, source);

    printf("Output: %s\n", destination);

    return 0;
}

/*
    Output: India is my
*/