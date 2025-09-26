/* 34. Accept number of rows from user and print following pattern
 * Pattern :
 * 1 
 * 1 1 
 * 1 0 1 
 * 1 0 0 1 
 * 1 0 0 0 1 
 * 1 1 1 1 1 1
 */
#include <stdio.h>

void pattern_34() 
{
    int N = 6; 
    int i, j;

    printf("Enter number of rows : ");
    scanf("%d", &N);
    
    printf("\nPattern 34:\n");
    for (i = 1; i <= N; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            if (i == N) 
            { 
                 printf("%d ", 1);
            } else if (j == 1 || j == i) 
            { 
                printf("%d ", 1);
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
1 1 
1 0 1 
1 0 0 1 
1 0 0 0 1 
1 1 1 1 1 1 
*/