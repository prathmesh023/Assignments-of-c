//31.Write a program which accept number from user and check whether number is palindrome number or not. Input : 15

#include <stdio.h>

int main() 
{
    int num, num1 = 0, a, b;

    printf("Enter a number: ");
    scanf("%d", &num);

    b = num;  

    while(num > 0) 
    {
        a = num % 10;
        num1 = num1 * 10 + a;
        num /= 10;
    }

    if(b == num1)
        printf("%d is a Palindrome number.\n", b);
    else
        printf("%d is Not a Palindrome number.\n", b);

    return 0;
}

// Output=
// Input: 15
// Output: 15 is Not a Palindrome number.

