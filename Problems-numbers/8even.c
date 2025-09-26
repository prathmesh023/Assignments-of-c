// 8. Write a program which accepts a from user and print all even numbers up to a.

#include <stdio.h>

int main() 
{
    int a, b;

    printf("Enter a number a: ");
    scanf("%d", &a);

    printf("Even numbers up to %d are: ", a);
    for(b = 2; b <= a; b += 2) 
    {
        printf("%d ", b);
    }
    printf("\n");

    return 0;
}

// Output=
// Enter a number a: 20
// Even numbers up to 20 are: 2 4 6 8 10 12 14 16 18 20

