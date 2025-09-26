/* 32. Accept number of rows from user and print following pattern
 * Pattern for N=5:
 * 10 
 * 20 21 
 * 30 31 32 
 * 40 41 42 43 
 * 50 51 52 53 54
 */
#include <stdio.h>

void pattern_32() 
{
    int N = 5; 
    int i, j;
    
    int pattern[5][5] = {
        {10},
        {20, 21},
        {30, 31, 32},
        {40, 41, 42, 43},
        {50, 51, 52, 53, 54}
    };
    
    printf("Enter number of rows (e.g., 5): ");
    scanf("%d", &N);
    
    printf("\nPattern 32:\n");
    int rows_to_print = (N > 5) ? 5 : N; 
    
    for (i = 0; i < rows_to_print; i++) 
    {
        for (j = 0; j <= i; j++) 
        {
            printf("%d ", pattern[i][j]);
        }
        printf("\n");
    }
}



/* Output of Code:
Pattern :
10 
20 21 
30 31 32 
40 41 42 43 
50 51 52 53 54 
*/