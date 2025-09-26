//27.Write a program to find number of digits.  1535

#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num == 0) 
    {
        count = 1;
    } else 
    {
        while(num != 0) 
        {
            num /= 10;  
            count++;
        }
    }

    printf("Number of digits = %d\n", count);

    return 0;
}


// output
// Enter a number: 1535
// Number of digits = 4

