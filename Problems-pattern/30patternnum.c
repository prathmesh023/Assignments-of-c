/* 30. Accept number of rows from user and print following pattern
 * 1 
 * 4 9 
 * 16 25 36
 */

#include <stdio.h>
void pattern() 
{
    int N = 4; 
    int i, j;
    int num = 1; 

    printf("Enter number of rows (e.g., 4): ");
    scanf("%d", &N);
    
    printf("\nPattern 30:\n");
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num * num);
            num++; 
        }
        printf("\n");
    }
}


/* Output of Code :
Pattern :
1 
4 9 
16 25 36 
*/