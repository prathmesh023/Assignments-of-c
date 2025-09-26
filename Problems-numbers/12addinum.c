//12.Write a program which accept N numbers from user and print addition of that numbers

#include <stdio.h>

int main() 
{
    int numbers[7]; 
    int sum = 0;
    int i;

    printf("Enter 7 numbers: ");
    for(i = 0; i < 7; i++) 
    {
        scanf("%d", &numbers[i]);
        sum += numbers[i];  
    }

    printf("The addition of the numbers is: %d\n", sum);

    return 0;
}

//  Output=
//  Enter 7 numbers: 4 7 2 1 5 3 8
//  The addition of the numbers is: 30

