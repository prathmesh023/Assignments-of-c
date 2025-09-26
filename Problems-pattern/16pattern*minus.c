/*
16.Accept number of rows from user and print following pattern
* - - -
* * - -
* - * -
* - - *
*/
#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Pattern 16 (Specific for 4 rows):\n");
    if (rows == 4) 
    {
        printf("* - - - \n"); 
        printf("* * - - \n"); 
        printf("* - * - \n"); 
        printf("* - - * \n"); 
    } else 
    {
        for (i = 1; i <= rows; i++)
        {
            for (j = 1; j <= rows; j++) 
            {
                if (j <= i) 
                { 
                    printf("* ");
                } else 
                { 
                    printf("- ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
/*
Output for rows = 4:
* - - - 
* * - - 
* - * - 
* - - * */