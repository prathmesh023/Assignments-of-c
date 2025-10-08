//26.Write a program which accept string from user and reverse words from that string.

#include <stdio.h>
#include <string.h>

void rev_substr(char *str, int start, int end) 
{

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

void rev_words(char *str) 
{
    int length = strlen(str);
    int start = 0;
    int end = 0;

    while (end <= length) 
    {
        if (str[end] == ' ' || str[end] == '\0') 
        {
            rev_substr(str, start, end - 1);
            start = end + 1;
        }
        end++;
    }
}

int main() 
{
    char arr[100];

    printf("Enter a string: ");
    if (fgets(arr, sizeof(arr), stdin) != NULL) 
    {
        arr[strcspn(arr, "\n")] = 0; 
    } else {
        return 1;
    }

    rev_words(arr);

    printf("String with reversed words: %s\n", arr);

    return 0;
}

//Output 
//Enter a string: Hello World
//String with reversed words: olleH dlroW