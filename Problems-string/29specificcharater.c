//29.Write a program which sets all characters in string to a specific character 

#include <stdio.h>
#include <string.h>

char strset(char *str, int ch) 
{
    char *start = str;
    
    while (*str != '\0') 
    {
        *str = (char)ch; 
        str++;
    }
    
    return start; 
}

int main() 
{
    char arr[100] = "HelloWorld";
    char set_char = 'a';

    printf("Original string: %s\n", arr);
    printf("Character to set: %c\n", set_char);
    
strset(arr, set_char);

    printf("Output: %s\n", arr);

    return 0;
}

//Output 
//Original string: HelloWorld
//Character to set: a
//Output: aaaaaaaaaa