//28.Write a program which accept string from user and check whether string is palindrome or not.

#include <stdio.h>
#include <string.h>

int is_palindrome(const char *str) 
{
    if (str == NULL) return 0;

    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) 
    {
        if (str[start] != str[end]) 
        {
            return 0; 
        }
        start++;
        end--;
    }

    return 1; 
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

    if (is_palindrome(arr)) 
    {
        printf("Output: String is palindrome.\n");
    } else 
    {
        printf("Output: String is NOT palindrome.\n");
    }

    return 0;
}

//Output 
//Enter a string: level
//Output: String is palindrome.

