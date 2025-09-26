/* 4. Accept num of elements to be print from user and print following pattern
1 3 5 7 9 10 */

#include <stdio.h>
int main() 
{
    int n, i, num;
    printf("Enter num of elements (n): ");
    scanf("%d", &n);
    
    printf("Pattern: \n");
    for (i = 0; i < n; i++) 
    {
        num = 2 * i + 1;
        printf("%d ", num);
    }
    printf("\n");
    return 0;
}
/*
Output:
Enter num of elements (n): 6
Pattern: 
1 3 5 7 9 11 
*/