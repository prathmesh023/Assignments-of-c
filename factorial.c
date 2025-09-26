//Write a program to calculate the factorial of a number 

#include <stdio.h>

int main() {
    int n;
    int i;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)

        fact *= i;

    printf("Factorial = %d\n", fact);
    
    return 0;
}


//  Output
//  Enter a number: 5
//  Factorial = 120s