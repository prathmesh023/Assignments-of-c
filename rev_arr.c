//Write a program to reverse an array of 5 integers.

#include <stdio.h>

int main() 
{
    int a[5];
    int i;

    printf("Enter 5 integers: \n");
    for(i = 0; i < 5; i++)
    scanf("%d\n", &a[i]);
    

    printf("Reversed array: \n");
    for(i = 4; i >= 0; i--)
        printf("%d \n", a[i]);

    return 0;
}


//  Output=
//  Enter 5 integers: 
//  1
//  2
//  3
//  4
//  5
//  6
//  Reversed array: 
//  5 
//  4 
//  3 
//  2 
//  1 