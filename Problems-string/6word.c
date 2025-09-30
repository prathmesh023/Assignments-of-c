// 6.Write a program which accept sentences from user and print number of words from that sen.

#include <stdio.h>

int main() 
{
    char sen[] = "In my company";
    int word = 0;
    int i;
    int j = 0; 

    printf("Input : %s\n", sen);

    for (i = 0; sen[i] != '\0'; i++) 
    {
        if (isalnum(sen[i])) 
        {
            if (j == 0) 
            {
                j = 1;
                word++;
            }
        }
        else if (isspace(sen[i])) 
        {
            j = 0;
        }
    }

    printf("Output: %d\n", word);

    return 0;
}

/*
    Output: 3
*/