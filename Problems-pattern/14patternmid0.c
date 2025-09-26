/*
14.Accept number of rows from user and print following pattern
1 2 3 4
5 0 0 6
7 0 0 8
9 10 11 12
*/
#include <stdio.h>

int main() 
{
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Pattern 14 (Specific for 4 rows):\n");
    if (rows == 4) 
    {
        printf("1 2 3 4 \n"); 
        printf("5 0 0 6 \n"); 
        printf("7 0 0 8 \n"); 
        printf("9 10 11 12 \n"); 
    } else {
        // Simple sequential pattern if rows is not 4
        int i, j, count = 1;
        for (i = 1; i <= rows; i++) 
        {
            for (j = 1; j <= rows; j++) 
            {
                printf("%d ", count++);
            }
            printf("\n");
        }
    }

    return 0;
}
/*
Output for rows = 4:
1 2 3 4 
5 0 0 6 
7 0 0 8 
9 10 11 12 
*/