// 1. Program to store and display employee name and ID using a structure.

#include <stdio.h>
#include <string.h>

struct Employee 
{
    char name[50];
    int idNumber;
};

int main() 
{
    struct Employee emp;

    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = 0;

    printf("Enter employee ID number: ");
    scanf("%d", &emp.idNumber);

    printf("\n--- Employee Information ---\n");
    printf("Name: %s\n", emp.name);
    printf("ID Number: %d\n", emp.idNumber);

    return 0;
}

/* Output Example:
Enter employee name: John Doe
Enter employee ID number: 1001

--- Employee Information ---
Name: John Doe
ID Number: 1001
*/