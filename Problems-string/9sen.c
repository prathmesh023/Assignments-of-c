// 9.Write a program which accept sentences from user and position from user and print the word at that position.

#include <stdio.h>
#include <string.h>

int main() 
{
    char sen[] = "is my he she";
    int position = 3; 
    int current = 0;
    int i;
    int word = 0;
    int start = -1;
    int end = -1;

    printf("Input : %s %d\n", sen, position);

    for (i = 0; sen[i] != '\0'; i++) 
    {
        if (isalnum(sen[i])) 
        {
            if (word == 0) 
            {
                word = 1;
                current++;
                if (current == position) 
                {
                    start = i;
                }
            }
        }
        else if (isspace(sen[i])) 
        {
            if (word == 1) 
            { 
                if (current == position) 
                {
                    end = i;
                    break; 
                }
            }
            word = 0;
        }
    }

    printf("Output: ");
    if (start != -1) 
    {
        if (end == -1) 
        {
            end = strlen(sen);
        }

        for (i = start; i < end; i++) 
        {
            printf("%c", sen[i]);
        }
    } else 
    {
        printf("Word not found.");
    }
    printf("\n");

    return 0;
}

/*
    Output: he
*/