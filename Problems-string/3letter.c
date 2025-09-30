// 3.Write a program which accept sen from user and print number of small letters, capital letters and digits from that sen.

#include <stdio.h>
#include <ctype.h>

int main() 
{
    char sen[] = "abcDE 5Glm1 O";
    int small = 0;
    int capital = 0;
    int digit = 0;
    int i;

    printf("Input : %s\n", sen);

    for (i = 0; sen[i] != '\0'; i++) 
    {
        if (islower(sen[i])) 
        {
            small++;
        } else if (isupper(sen[i])) 
        {
            capital++;
        } else if (isdigit(sen[i])) 
        {
            digit++;
        }
    }

    printf("Output: Small:%d Capital:%d Digits:%d\n", small, capital, digit);

    return 0;
}

/*
    Output: Small:5 Capital:4 Digits:2
*/