/* 29. Accept number of rows from user and print following pattern
 * Pattern for N=5:
 * 1 
 * 2 3 
 * 4 5 6 
 * 7 8 9 10 
 * 11 12 13 14 15
 */
#include <stdio.h>

void pattern() 
{
    int N = 5; 
    int i, j;
    int count = 1; 
    printf("Enter number of rows : ");
    scanf("%d", &N);
    
    printf("\nPattern 29:\n");
    for (i = 1; i <= N; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("%d ", count);
            count++; 
        }
        printf("\n");
    }
}



/* Output of Code (for N=5):
Pattern:
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/