//18.Write a program which accepts range from user and print perfect numbers from given range.  (1 10)


#include <stdio.h>

int main() {
    int start, end, i, j, sum;

    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Perfect numbers in the range %d to %d are: ", start, end);

    for(i = start; i <= end; i++) 
    {
        sum = 0;

        for(j = 1; j <= i/2; j++) 
        {
            if(i % j == 0) 
            {
                sum += j;
            }
        }

        if(sum == i) 
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

// Output=
// Enter the range (start end): 1 10
// Perfect numbers in the range 1 to 10 are: 6

