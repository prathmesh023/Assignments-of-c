/* 6. Accept number of elements to be print from user and print following pattern
A A A A A A */

#include <stdio.h>
int main() 
{
    int n, i;
    printf("Enter number of elements (n): ");
    scanf("%d", &n);
    
    printf("Pattern: \n");
    for (i = 0; i < n; i++) 
    {
        printf("A ");
    }
    printf("\n");
    return 0;
}
/*
Output :
Enter number of elements (n): 6
Pattern: 
A A A A A A 
*/