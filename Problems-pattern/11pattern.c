/*
11.Accept number of a from user and print following pattern
a a a a
a a a a
a a a a
a a a a
*/
#include <stdio.h>

int main()
{
    int a, i, j;

    printf("Enter number of a: ");
    scanf("%d", &a);

    printf("Pattern 11:\n");
    for (i = 1; i <= a; i++) 
    {
        for (j = 1; j <= a; j++)
        {
            printf("a ");
        }
        printf("\n");
    }

    return 0;
}

/*
Output for a = 4:
a a a a
a a a a
a a a a
a a a a
*/