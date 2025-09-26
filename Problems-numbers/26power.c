//26.Write a program to find power of a given number. 2 4 

#include <stdio.h>

int main() {
    int a, b, i;
    long long result = 1;


    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    for(i = 1; i <= b; i++) 
    {
        result *= a;
    }

    printf("%d ^ %d = %lld\n", a, b, result);

    return 0;
}

// output
// Enter base and exponent: 2 4
// 2 ^ 4 = 16
