//22.Write a program to check whether a number is strong number or not. 145

#include <stdio.h>

int factorial(int n) 
{
    int fact = 1, i;
    for(i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() 
{
    int num, num, num1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    num = num;

    while(num > 0) 
    {
        num1 = num % 10;
        sum += factorial(num1);
        num /= 10;
    }

    if(sum == num) 
    {
        printf("%d is a Strong number.\n", num);
    } else 
    {
        printf("%d is not a Strong number.\n", num);
    }

    return 0;
}

// output=
// Enter a number: 145
// 145 is a Strong number.

