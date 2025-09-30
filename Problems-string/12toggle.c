// 12.Write a program which toggles the case of a string.

#include <stdio.h>
#include <string.h>

void toggle_case(char *s) 
{
    int i = 0;
    while (s[i] != '\0') 
    {
        if (islower(s[i])) 
        {
            s[i] = toupper(s[i]);
        } else if (isupper(s[i])) 
        {
            s[i] = tolower(s[i]);
        }
        i++;
    }
}

int main() 
{
    char sen[] = "Device DRiver";

    printf("Input : Device DRiver\n");

    toggle_case(sen);

    printf("Output: %s\n", sen);

    return 0;
}

/*
    Output: dEVICE driver
*/