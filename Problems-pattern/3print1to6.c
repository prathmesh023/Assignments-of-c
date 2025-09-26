/* 3. Accept number of elements to be print from user and print following pattern
1 2 3 4 5 6 */

#include <stdio.h>
int main() 
{
    int n, i;
    printf("Enter number of elements (n): ");
    scanf("%d", &n);
    
    printf("Pattern: \n");
    for (i = 1; i <= n; i++) 
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}


/*
 Output:
Enter number of elements (n): 6
Pattern: 
1 2 3 4 5 6 
*/