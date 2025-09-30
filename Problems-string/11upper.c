// 11.Write a program to convert the string from lower case to upper case (Implement strupr()).

#include <stdio.h>
#include <string.h>

void my_strupr(char *s) 
{
    int i = 0;
    while (s[i] != '\0') 
    {
        s[i] = toupper(s[i]);
        i++;
    }
}

int main() {
    char sen[] = "Device DRiver";

    printf("Input : Device DRiver\n");

    my_strupr(sen);

    printf("Output: %s\n", sen);

    return 0;
}

/*
    Output: DEVICE DRIVER
*/