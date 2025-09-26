/*
24. Accept number of rows from user and print following pattern
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

#include <stdio.h>

int main() {
    int rows, i, j, digit;
    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    for (i = 1; i <= rows; i++) 
    {
        
        digit = (i % 2 != 0) ? 1 : 0;

        for (j = 1; j <= i; j++) 
        {
            printf("%d ", digit);
            
            digit = 1 - digit; 
        }
        printf("\n");
    }

    return 0;
}
/*
OUTPUT (for input 5):
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
*/