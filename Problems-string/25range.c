//25.Write a program which accept string from user and then accept range and reverse the string in that range without taking another string.

#include <stdio.h>
#include <string.h> 
void reverse(char *str, int start, int end) 
{
    if (str == NULL) return;

    int length = strlen(str);

    int start_id = start - 1;
    int end_id = end - 1;

    if (start_id < 0 || end_id >= length || start_id > end_id) 
    {
        printf("Invalid range. Reversal skipped.\n");
        return;
    }

    char temp;
    while (start_id < end_id) 
    {
        temp = str[start_id];
        str[start_id] = str[end_id];
        str[end_id] = temp;

        start_id++;
        end_id--;
    }
}

int main() 
{
    char arr[100];
    int startrange, endrange;

    printf("Enter a string: ");
    if (fgets(arr, sizeof(arr), stdin) != NULL) 
    {
        arr[strcspn(arr, "\n")] = 0; 
    } else 
    {
        return 1;
    }

    printf("Enter the starting and ending position (1-based, e.g., 3 8): ");
    if (scanf("%d %d", &startrange, &endrange) != 2) {
        return 1;
    }

    reverse(arr, startrange, endrange);

    printf("String after reversing range [%d, %d]: %s\n", startrange, endrange, arr);

    return 0;
}

//Output 
//Enter a string: Hello World
//Enter the starting and ending position
//String after reversing range [3, 8]: HeWo olrlld 