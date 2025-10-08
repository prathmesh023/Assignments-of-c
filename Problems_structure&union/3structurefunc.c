// 3. Program to define a student structure, pass it to a function, and print its content.

#include <stdio.h>
#include <string.h>

struct Student 
{
    char name[50];
    char address[100];
    char standard[10];
    char division;
    int marks[5];
    char parentName[50];
    char contactNumber[15];
};

void printStudent(struct Student s) 
{
    printf("\n--- Student Information ---\n");
    printf("Name: %s\n", s.name);
    printf("Address: %s\n", s.address);
    printf("Standard: %s\n", s.standard);
    printf("Division: %c\n", s.division);

    printf("Marks in 5 Subjects: ");
    for (int i = 0; i < 5; i++) {
        printf("%d", s.marks[i]);
        if (i < 4) {
            printf(", ");
        }
    }
    printf("\n");

    printf("Parent's Name: %s\n", s.parentName);
    printf("Contact Number: %s\n", s.contactNumber);
}

int main() 
{
    struct Student s1 = {
        .name = "Alice Smith",
        .address = "123 Main St, City",
        .standard = "10th",
        .division = 'A',
        .marks = {85, 90, 78, 92, 88},
        .parentName = "Mr. David Smith",
        .contactNumber = "9876543210"
    };

    printStudent(s1);

    return 0;
}

/* Output Example:
--- Student Information ---
Name: Alice Smith
Address: 123 Main St, City
Standard: 10th
Division: A
Marks in 5 Subjects: 85, 90, 78, 92, 88
Parent's Name: Mr. David Smith
Contact Number: 9876543210
*/