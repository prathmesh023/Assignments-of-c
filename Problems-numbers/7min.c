//6. Write a program which accept two numbers and print minimum number.(4 7)

#include <stdio.h>

int main() 
{
    int i = 4;
    int j = 7;

    printf("minimum number is %d\n", (i < j) ? i : j);
    return 0;
}


// Output=
// minimum number is 7