//32.Write a program which accept range from user and print all numbers from that range whose addition of digits of that number is prime number. Input : 20 30

#include <stdio.h>

int prime(int n) 
{
    if(n < 2) return 0;
    for(int i=2; i*i <= n; i++)
        if(n % i == 0) return 0;
    return 1;
}

int sum(int n) 
{
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() 
{
    int a, b;
    printf("Enter range: ");
    scanf("%d %d", &a, &b);

    printf("Numbers whose digit sum is prime:\n");
    for(int i = a; i <= b; i++) {
        if(prime(sum(i)))
            printf("%d ", i);
    }
    return 0;
}

// output=
// Input: 20 30
// Output: Numbers whose digit sum is prime:
// 20 21 23 25 29
