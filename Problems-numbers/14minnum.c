//14.Write a program which accept N numbers from user and print maximum number from that numbers(4,7,2,1,5,3,8)

#include <stdio.h>

int main() 
{
    int num[7], a, min;

    printf("Enter 7 num: ");
    for(a = 0; a < 7; a++)
    {
        scanf("%d", &num[a]);
    }

    min = num[0];

    for(a = 1; a < 7; a++) 
    {
        if(num[a] < min)
        {
            min = num[a];
        }
    }

    printf("Minimum number is: %d\n", min);
    return 0;
}

//Output=
//Enter 7 num: 4 7 2 1 5 3 8
//Minimum number is: 1
