//6. Write a program which accept two numbers and print maximum number.(4 7)

#include <stdio.h>

int main() 
{
    int num1 = 4;
    int num2 = 7;

    printf("Maximum number is %d\n", (num1 > num2) ? num1 : num2);
    return 0;
}


// Output=
// Maximum number is 7