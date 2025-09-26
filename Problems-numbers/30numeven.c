//30.Write a program which accept number from user and print all digits from that number which are at even position. Input : 1537 5641 

#include <stdio.h>
#include <string.h>

int main() 
{
    char num[50];
    int i;

    printf("Enter a number: ");
    scanf("%s", num);

    printf("Digits at even positions: ");
    for(i = 0; num[i] != '\0'; i++) 
    {
        if((i+1) % 2 == 0)   
            printf("%c ", num[i]);
    }

    return 0;
}


// ouput=
// Input: 1537
// Output: Digits at even positions: 5 7
// 
// Input: 5641
// Output: Digits at even positions: 6 1

