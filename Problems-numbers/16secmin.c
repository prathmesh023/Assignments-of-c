//16.Write a program which accept N num from user and print second last minimum number from that num

#include <stdio.h>

int main()
{
    int num[7], i;
    int min, secmin;

    printf("Enter 7 num: ");
    for(i = 0; i < 7; i++) 
    {
        scanf("%d", &num[i]);
    }

    if(num[0] < num[1]) 
    {
        min = num[0];
        secmin = num[1];
    } else 
    {
        min = num[1];
        secmin = num[0];
    }

    for(i = 2; i < 7; i++) 
    {
        if(num[i] < min) 
        {
            secmin = min;
            min = num[i];
        } else 
        if(num[i] < secmin) 
        {
            secmin = num[i];
        }
    }

    printf("Second smallest number is: %d\n", secmin);
    return 0;
}


// Output=
// Enter 7 num: 4 7 2 1 5 3 8
// Second smallest number is: 2
