/* 35. Accept number of rows from user and print following pattern
 * 1
 * 1 1 1
 * 1 0 1 0 1
 * 1 0 0 1 0 0 1
 * 1 1 1 1 1 1 1 1 1
 */
#include <stdio.h>

void pattern() 
{
    int N = 5;
    int i, j, k;

    printf("Enter number of rows (e.g., 5): ");
    scanf("%d", &N);
    
    printf("\nPattern 35:\n");
    for (i = 1; i <= N; i++) 
    {
        for (j = 1; j <= N - i; j++) 
        {
            printf("  "); 
        }
        
        for (k = 1; k <= 2 * i - 1; k++) 
        {
            if (i == N) 
            { 
                printf("1 ");
            } else if (k == 1 || k == 2 * i - 1) 
            {
                printf("1 ");
            } else if (i % 2 != 0 && k % 2 == 0) 
            { 
                 printf("0 ");
            } else if (i % 2 == 0 && k % 2 == 0) 
            { 
                 printf("1 ");
            } else {
                 printf("1 "); 
                 
            }
        }
        printf("\n");
    }
}


/* Output of Code:
Pattern:
        1 
      1 1 1 
    1 0 1 0 1 
  1 1 1 1 1 1 1 
1 1 1 1 1 1 1 1 1 
*/