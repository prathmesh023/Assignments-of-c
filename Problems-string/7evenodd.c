// 7.Write a program which accept sentences from user and print number of words of even and odd length from that sen.

#include <stdio.h>

int main() 
{
    char sen[] = "In my company";
    int even = 0;
    int odd = 0;
    int word = 0;
    int i;

    printf("Input : %s\n", sen);

    for (i = 0; sen[i] != '\0'; i++) 
    {
        if (isalnum(sen[i])) 
        {
            word++;
        }
        else if (isspace(sen[i])) 
        {
            if (word > 0) 
            { 
                if (word % 2 == 0) 
                {
                    even++;
                } else 
                {
                    odd++;
                }
                word = 0; 
            }
        }
    }
    if (word > 0) 
    {
        if (word % 2 == 0) 
        {
            even++;
        } else 
        {
            odd++;
        }
    }

    printf("Output: Even: %d Odd: %d\n", even, odd);

    return 0;
}

/*
    Output: Even: 2 Odd: 1
*/