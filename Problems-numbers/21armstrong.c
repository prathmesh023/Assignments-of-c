//21.Write a program to check whether given number is Armstrong Number or not. 153

#include <stdio.h>
#include <math.h>

int main() 
{
    int num, num, num1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    num = num;

    while(num > 0) 
    {
        num1 = num % 10;
        sum += num1 * num1 * num1;
        num /= 10;
    }

    if(sum == num) 
    {
        printf("%d is an Armstrong number.\n", num);
    } else 
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}


// output=
// Enter a number: 153
// 153 is an Armstrong number.
