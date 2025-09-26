// 20. Accept number of rows from user and print following pattern.

#include <stdio.h>
int main() 
{
    int N; 
    int i, j;
    
    printf("Enter the number of rows : ");
    if (scanf("%d", &N) != 1 || N <= 0) 
    {
        printf("Invalid input. Using default N=5.\n");
        N = 5;
    }
    
    for (i = N; i >= 1; i--) 
    {
        for (j = 0; j < N - i; j++) 
        {
            printf(" ");
        }
        
        for (j = 0; j < i; j++) 
        {
            printf("* ");
        }
        
        printf("\n");
    }
    
    return 0;
}

/*output=
Enter the number of rows : 5
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
    * */ 