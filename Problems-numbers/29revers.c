//29.Write a program to reverse the number. Input : 1535

#include <stdio.h>

int main() {
    int num, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while(num > 0) {
        rem = num % 10;       // last digit
        rev = rev * 10 + rem; // reverse
        num /= 10;            // remove last digit
    }

    printf("Reversed number = %d\n", rev);

    return 0;
}

// output
// Enter a number: 1535
// Reversed number = 5351
