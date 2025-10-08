//27.Write a program which accept string from user and reverse words from that string which are of even length.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char *str, int start, int end) 
{
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverse_even_length_words(char *str) 
{
    int length = strlen(str);
    int start = 0;
    int end = 0;

    while (end <= length) {
        if (str[end] == ' ' || str[end] == '\0') 
        {
            int word_len = end - start;
            
            if (word_len > 0 && word_len % 2 == 0) 
            {
                reverse(str, start, end - 1);
            }
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

    reverse_even_length_words(arr);

    printf("String with even length words reversed: %s\n", arr);

    return 0;
}

//Output 
//Enter a string: New HO abcd can
//String with even length words reversed: New OH dcba can 
