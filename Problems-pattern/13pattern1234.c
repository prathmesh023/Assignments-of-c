/*
13.Accept number of rows from user and print following pattern
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/
#include <stdio.h>

int main() 
{
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Pattern 13:\n");
    for (i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= rows; j++) 
        {
            printf("%d ", j); 
        }
        printf("\n");
    }

    return 0;
}
/*
Output for rows = 4:
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/