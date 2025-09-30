// 2.Write a program which accepts a string which contains a characters from 'b' to 'y' and prints it.

#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "mn jn kn kazfd";
    char b[100];
    int i, j = 0;

    printf("a : %s\n", a);

    for (i = 0; a[i] != '\0'; i++) 
    {
        char c = tolower(a[i]);

        if ((c >= 'b' && c <= 'y') || c == ' ') 
        {
            b[j++] = a[i]; 
        }
    }
    b[j] = '\0'; 
    printf("Output: %s\n", b);

    return 0;
}

/*
    Outputs: mn jn kn k
*/