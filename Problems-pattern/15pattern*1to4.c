/*
15.Accept number of rows from user and print following pattern
      *
    * *
  * * *
* * * *
*/
#include <stdio.h>

int main() 
{
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Pattern 15:\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows; j++) 
        {
            
            if (j >= rows - i + 1) 
            {
                printf("* ");
            } else 
            {
                printf("  "); 
            }
        }
        printf("\n");
    }

    return 0;
}
/*
Output for rows = 4:
      *
    * *
  * * *
* * * */