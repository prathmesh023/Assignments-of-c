//33.Write a program which accept number from user and print addition of digits which are divisible by 3.

#include <stdio.h>

int main() {
    long long num;
    int i, sum = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    while(num > 0) 
    {
        i = num % 10;
        if(i % 3 == 0)      
            sum += i;
        num /= 10;            

    }
    printf("Sum of digits divisible by 3 = %d\n", sum);
    return 0;
}



// Input: 295367542
// Output: Sum of digits divisible by 3 = 18
