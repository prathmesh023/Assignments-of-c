/*
17. Accept number of rows from user and print following pattern. (- is blank space)
*****
*---*
*---*
*---*
*****
*/
#include <stdio.h>

void pattern17(int rows) 
{
    int i, j;
    int cols = rows; 

    for (i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= cols; j++) 
        {
            if (i == 1 || i == rows || j == 1 || j == cols) 
            {
                printf("*");
            } else 
            {
                printf("-");
            }
        }
        printf("\n");
    }
}

/*
Output for rows = 5:
*****
*---*
*---*
*---*
*****
*/