/*
12.Accept number of rows from user and print following pattern
a b c d
a b c d
a b c d
a b c d
*/
#include <stdio.h>

int main() 
{
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Pattern 12:\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows; j++) {
            printf("%c ", 'a' + (j - 1));
        }
        printf("\n");
    }

    return 0;
}
/*
Output for rows = 4:
a b c d
a b c d
a b c d
a b c d
*/