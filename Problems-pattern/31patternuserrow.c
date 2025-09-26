/* 31. Accept number of rows from user and print following pattern
 * Pattern :
 * 1 
 * 4 9 
 * 7 7 9 
 * 13 10 9 1
 */
#include <stdio.h>

void pattern() 
{
    int N = 4; 
    int i, j;
    
    int pattern[4][4] = {
        {1},
        {4, 9},
        {7, 7, 9},
        {13, 10, 9, 1}
    };
    
    printf("Enter number of rows (e.g., 4): ");
    scanf("%d", &N);
    
    printf("\nPattern 31:\n");
    int rows_to_print = (N > 4) ? 4 : N; 
    
    for (i = 0; i < rows_to_print; i++) 
    {
        for (j = 0; j <= i; j++) 
        {
            printf("%d ", pattern[i][j]);
        }
        printf("\n");
    }
}


/* Output of Code :
Pattern:
1 
4 9 
7 7 9 
13 10 9 1 
*/