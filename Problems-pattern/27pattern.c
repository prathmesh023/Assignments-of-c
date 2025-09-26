/* 27. Accept number of rows from user and print following pattern
 * Pattern for N=5:
 * 2 
 * 2 2 
 * 3 3 3 
 * 4 4 4 4 
 * 5 5 5 5 5
 */
#include <stdio.h>

void pattern() 
{
    int N = 5; 
    int i, j;
    
    printf("Enter number of rows : ");
    scanf("%d", &N);

    printf("\nPattern 27:\n");
    for (i = 1; i <= N; i++) 
    {
        int num = i + 1; 
        
        for (j = 1; j <= i; j++) 
        {
            printf("%d ", num);
        }
        printf("\n");
    }
}



/* Output of Code:
Pattern :
2 
3 3 
4 4 4 
5 5 5 5 
6 6 6 6 6 
*/