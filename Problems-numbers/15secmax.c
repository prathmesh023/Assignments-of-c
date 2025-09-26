//15.Write a program which accept numbers from user and print second last maximum number from that numbers

#include <stdio.h>

int main()
{
    int numbers[7], i;
    int max, secmax;

    printf("Enter 7 numbers: ");
    for(i = 0; i < 7; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    if(numbers[0] > numbers[1]) 
    {
        max = numbers[0];
        secmax = numbers[1];
    } else 
    {
        max = numbers[1];
        secmax = numbers[0];
    }

    for(i = 2; i < 7; i++) 
    {
        if(numbers[i] > max) 
        {
            secmax = max;
            max = numbers[i];
        } else 
        if(numbers[i] > secmax) 
        {
            secmax = numbers[i];
        }
    }

    printf("Second largest number is: %d\n", secmax);
    return 0;
}


// Output=
// Enter 7 numbers: 4 7 2 1 5 3 8
// Second largest number is: 7
