//19.Write a program which accepts range from user and print prime numbers from given range. 

#include <stdio.h>

int main() 
{
    int a, b, i, j, prime;

    printf("Enter the range (a b): ");
    scanf("%d %d", &a, &b);

    printf("Prime numbers in the range %d to %d are: ", a, b);

    for(i = a; i <= b; i++) 
    {
        if(i < 2) continue; 

        prime = 1; 

        for(j = 2; j * j <= i; j++) 
        {
            if(i % j == 0) 
            {
                prime = 0;
                break;
            }
        }

        if(prime) 
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

//output=
//Enter the range (start end): 1 10
//Prime numbers in the range 1 to 10 are: 2 3 5 7

