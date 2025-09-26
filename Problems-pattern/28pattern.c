/* 28. Accept number of rows from user and print following pattern
 * Pattern for N=5:
 * 1 
 * 1 2 
 * 1 2 3 
 * 1 2 3 4 
 * 1 2 3 4 5
 */
#include <stdio.h>

void pattern() 
{
    int N = 5; 
    int i, j;

    printf("Enter number of rows : ");
    scanf("%d", &N);
    
    printf("\nPattern 28:\n");
    for (i = 1; i <= N; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}


/* Output of Code :
Pattern:
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/