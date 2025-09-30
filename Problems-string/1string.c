// 1.Write a program which accept sentence from user and print that sentence.

#include <stdio.h>
#include <string.h>

int main() 
{
    char sentence[100]; 

    printf("Input : My name is\n");
    strcpy(sentence, "My name is"); 

    printf("Output: %s\n", sentence);

    return 0;
}

/*
    Output: My name is
*/
