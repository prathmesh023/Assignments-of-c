// 2. Program to find the difference in days between two dates.

#include <stdio.h>
struct Date 
{
    int day;
    int month;
    int year;
};

const int days_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int isLeap(int y) 
{
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

long int countDays(struct Date d) 
{
    long int total_days = d.day;

    for (int y = 1; y < d.year; y++) 
    {
        total_days += isLeap(y) ? 366 : 365;
    }

    for (int m = 1; m < d.month; m++) 
    {
        total_days += days_month[m];
    }

    if (d.month > 2 && isLeap(d.year)) 
    {
        total_days += 1;
    }

    return total_days;
}

int main() 
{
    struct Date date1, date2;
    long int days1, days2, difference;

    printf("Enter Date 1 (dd mm yyyy): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter Date 2 (dd mm yyyy): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    days1 = countDays(date1);
    days2 = countDays(date2);

    difference = days1 - days2;

    if (difference < 0) 
    {
        difference = -difference;
    }

    printf("\nThe difference between the two dates is: %ld days\n", difference);

    return 0;
}

/* Output Example:
Enter Date 1 (dd mm yyyy): 01 01 2024
Enter Date 2 (dd mm yyyy): 01 01 2025

The difference between the two dates is: 366 days (2024 is a leap year)
*/