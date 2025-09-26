//10.Write a program which accept i from user and print number-line for i (-4)

#include <stdio.h>

int main() {
    int i, j;

    // Accept i from user
    printf("Enter a number i: ");
    scanf("%d", &i);

    printf("Number line up to %d: ", i);

    if(i >= 0)
    {
         for(j = 0; j <= i; j++)
        {
            printf("%d ", j);
        }
    } else 
    {

        for(j = 0; j >= i; j--) 
        {
            printf("%d ", j);
        }
    }

    printf("\n");
    return 0;
}


//  Output=
//  Enter a number N: -4
//  Number line up to -4: 0 -1 -2 -3 -4