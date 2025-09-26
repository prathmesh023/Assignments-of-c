//25..Write a program to print Fibonacci series accept number of element in series from user.  6

#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c;

    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}


// output=
// Input: 6
// Fibonacci Series: 0 1 1 2 3 5
