/*
19. Accept number of rows from user and print following pattern. (- is blank space)
*
**
* *
* *
* *
* *
*******
*/
#include <stdio.h>

void pattern19(int rows) {
    int i, j;

    for (i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            if (j == 1 || j == i || i == rows) 
            {
                printf("*");
            } else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
/*
Output for rows = 7:
*
**
* *
* *
* *
* *
*******
*/