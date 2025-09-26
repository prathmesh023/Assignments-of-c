/* 7. Accept number of elements to be print from user and print following pattern
a b c d e f */

#include <stdio.h>
int main() 
{
    int n, i;
    char ch = 'a';
    printf("Enter number of elements (n): ");
    scanf("%d", &n);
    
    printf("Pattern: \n");
    for (i = 0; i < n; i++) 
    {
        printf("%c ", ch + i);
    }
    printf("\n");
    return 0;
}
/*
Output:
Enter number of elements (n): 6
Pattern: 
a b c d e f 
*/