/* 33. Accept number of rows from user and print following pattern
 * Pattern for N=5:
 * 1 
 * 2 3 
 * 4 5 6 
 * 7 8 9 1 
 * 2 3 4 5 6
 */
#include <stdio.h>

void pattern() 
{
    int N = 5; 
    int i, j;
    
    int pattern[5][5] = {
        {1},
        {2, 3},
        {4, 5, 6},
        {7, 8, 9, 1},
        {2, 3, 4, 5, 6}
    };
    
    printf("Enter number of rows (e.g., 5): ");
    scanf("%d", &N);
    
    printf("\nPattern 33:\n");
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



/* Output of Code :
Pattern:
1 
2 3 
4 5 6 
7 8 9 1 
2 3 4 5 6 
*/