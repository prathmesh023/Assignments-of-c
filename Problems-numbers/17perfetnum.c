//17.Write a program to check given number is perfect number or not. 6 

#include <stdio.h>

int main() 
{
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i <= num/2; i++) 
    {
        if(num % i == 0) 
        {
            sum += i;
        }
    }

    if(sum == num)
    {
        printf("%d is a perfect number.\n", num);
    } else 
    {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}


// Output=
// Enter a number: 6
// 6 is a perfect number.
