/*
23. Accept number of rows from user and print following pattern
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/
#include <stdio.h>

int main() {
    int rows, i, j;
    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) 
    {
        printf("Invalid input.\n");
        return 1;
    }

    for (i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("%d ", (j % 2 != 0) ? 1 : 0);
        }
        printf("\n");
    }

    return 0;
}
/*
OUTPUT :
1 
1 0 
1 0 1 
1 0 1 0 
1 0 1 0 1 
*/