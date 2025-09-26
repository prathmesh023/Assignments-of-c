/* 25. Accept number of rows from user and print following pattern
 * Pattern for N=5:
 * 1 
 * 1 2 
 * 1 0 3 
 * 1 0 0 4 
 * 1 0 0 0 5 
 */
#include <stdio.h>

void pattern() 
{
    int N = 5; 
    int i, j;

    printf("Enter number of rows (e.g., 5): ");
    scanf("%d", &N);
    
    printf("\nPattern 25:\n");
    for (i = 1; i <= N; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            if (j == 1) 
            {
                printf("%d ", 1);
            } else if (j == i) 
            {
                printf("%d ", i);
            } else 
            {
                printf("%d ", 0);
            }
        }
        printf("\n");
    }
}


/* Output of Code:
Pattern :
1 
1 2 
1 0 3 
1 0 0 4 
1 0 0 0 5 
*/