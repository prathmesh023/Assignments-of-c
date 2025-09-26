//11.Write a program which accept N and print first 5 multiples of N. (4)

#include <stdio.h>

int main() 
{
    int a, b;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("First 5 multiples of %d are: ", a);
    for(b = 1; b <= 5; b++)
    {
        printf("%d ", a * b);
    }
    printf("\n");

    return 0;
}


// Output=
// Enter a number: 4
// First 5 multiples of 4 are: 4 8 12 16 20
