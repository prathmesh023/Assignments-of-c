// 8.Write a program which accept sen from user and print last word from that sen.

#include <stdio.h>
#include <string.h>

int main() 
{
    char sen[] = "In my company";
    int len, i;
    int last = -1; 
    int word = 0;

    printf("Input : %s\n", sen);

    len = strlen(sen);

    for (i = len - 1; i >= 0; i--) 
    {
        if (!isspace(sen[i])) 
        {
            word = 1;
            last = i;
        } 
        else if (word) 
        {
            last = i + 1; 
            break;
        }
    }

    printf("Output: ");
    if (last != -1) 
    {
        for (i = last; i < len && !isspace(sen[i]); i++) 
        {
            printf("%c", sen[i]);
        }
    }
    printf("\n");

    return 0;
}

/*
    Output: company
*/