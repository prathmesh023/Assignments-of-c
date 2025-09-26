/* 10. Accept number of rows from user and print following pattern
* * * * *
* * * * *
* * * * *
* * * * *
* * * * * */

#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter number of rows (n): ");
    scanf("%d", &n);
    
    printf("Pattern: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
/*
Output:
Enter number of rows (n): 5
Pattern: 
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *  */