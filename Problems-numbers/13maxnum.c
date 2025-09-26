//13.Write a program which accept  numbers from user and print maximum number from that numbers(4,7,2,1,5,3,8)

#include <stdio.h>

int main() {
    int num[7], i, max;

    printf("Enter 7 num: ");
    for(i = 0; i < 7; i++)
    {
        scanf("%d", &num[i]);
    }

    max = num[0];

    for(i = 1; i < 7; i++) 
    {
        if(num[i] > max)
        {
            max = num[i];
        }
    }

    printf("Maximum number is: %d\n", max);
    return 0;
}

//Output=
//Enter 7 num: 4 7 2 1 5 3 8
//Maximum number is: 8
