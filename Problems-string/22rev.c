//22.Write a program which accept string from user and then reverse the string without taking another string (Implement strrev()).

#include <stdio.h>
#include <string.h> 

void strrev(char *str) 
{
    if (str == NULL) return;

    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end) 
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char arr[100];

    printf("Enter a string: ");
    if (fgets(arr, sizeof(arr), stdin) != NULL) 
    {
        arr[strcspn(arr, "\n")] = 0;
    } else 
    {
        return 1; 
    }

    strrev(arr);

    printf("Reversed string: %s\n", arr);

    return 0;
}

//Output 
//Enter a string: Hello World
//Reversed string: dlroW olleH