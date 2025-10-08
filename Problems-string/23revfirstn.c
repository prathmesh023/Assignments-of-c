//23.Write a program which accept string from user and then reverse the string till first N characters without taking another string.

#include <stdio.h>
#include <string.h> 

void reverse(char *str, int n) 
{
    if (str == NULL || n <= 0) return;

    int length = strlen(str);
    int limit = (n < length) ? n : length;
    
    int start = 0;
    int end = limit - 1;
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

int main() 
{
    char arr[100];
    int N;

    printf("Enter a string: ");
    if (fgets(arr, sizeof(arr), stdin) != NULL) 
    {
        arr[strcspn(arr, "\n")] = 0; 
    } else 
    {
        return 1;
    }
    
    printf("Enter the number of characters (N) to reverse: ");
    if (scanf("%d", &N) != 1) 
    {
        return 1;
    }

    reverse(arr, N);

    printf("String after reversing first %d characters: %s\n", N, arr);

    return 0;
}

//Output 
//Enter a string: Hello World
//Enter the number of characters (N) to reverse: 5
//String after reversing first 5 characters: olleH World