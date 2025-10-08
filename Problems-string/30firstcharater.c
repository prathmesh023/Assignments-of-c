//30.Write a program which sets first N characters in string to a specific character 

#include <stdio.h>
#include <string.h>

char strnset(char *str, int ch, size_t n) 
{
    char *start = str;
    size_t count = 0;

    while (*str != '\0' && count < n) 
    {
        *str = (char)ch; 
        str++;
        count++;
    }

    return start; 
}

int main() 
{
    char arr[100] = "HelloWorld";
    char set_char = 'a';
    size_t N = 8;

    printf("Original string: %s\n", arr);
    printf("Character to set: %c\n", set_char);
    printf("Number of characters (N) to set: %zu\n", N);
    
strnset(arr, set_char, N);

    printf("Output: %s\n", arr);

    return 0;
}

//Output (Input: HelloWorld a 8)
//Original string: HelloWorld
//Character to set: a
//Number of characters (N) to set: 8
//Output: aaaaaaaald