// 5.Write a program which accept sentences from user and print number of white spaces from that sen.

#include <stdio.h>

int main() 
{
    char sen[] = "In my company";
    int cont = 0;
    int i;

    printf("Input : %s\n", sen);

    for (i = 0; sen[i] != '\0'; i++) 
    {
        if (sen[i] == ' ') 
        {
            cont++;
        }
    }

    printf("Output: %d\n", cont);

    return 0;
}

/*
    Output: 2
*/