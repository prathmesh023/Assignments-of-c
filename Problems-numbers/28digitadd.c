//28.Write a program to find out sum of digit of given number. 1535

#include <stdio.h>

int main() {
    int num, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        rem = num % 10;  
        sum += rem;       
        num /= 10;        
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}


// output=
// Enter a number: 1535
// Sum of digits = 14

