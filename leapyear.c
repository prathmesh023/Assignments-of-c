// 1)write a program to check whether a given year is a leap year

#include<stdio.h>
int main()
{

    int year;

    printf("Enter a year: ");
    scanf("%d",&year);

    //using if and else checking leap year

    if((year %400 == 0) || (year %4 == 0 && year %100 != 0))
    {
        printf("%d IS A LEAP YEAR.\n",year);
    }
    else
    {
        printf("%d IS NOT A LEAP YEAR.\n",year);
    }
    return 0;
}



//Output
// Enter a year: 2024
// 2024 IS A LEAP YEAR.

// Enter a year: 2025
// 2025 IS NOT A LEAP YEAR.