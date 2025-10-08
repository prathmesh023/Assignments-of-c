// 4.Write a program which contains student structure (name, address, standard, division, marks of five subjects, name of parents, contact number) and create array of 50 elements of that student structure.
// - Pass that array to function and print all information of student having maximum marks.
// - Pass that array to function and print all information of student having minimum marks.
// - Pass that array to function and print all information of such students whose address field contains "Karve Road".

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char address[100];
    char standard[10];
    char division[5];
    int marks[5];
    int total_marks;
    char parents_name[50];
    char contact_number[15];
} Student;

void calculate_total_marks(Student* s) 
{
    s->total_marks = 0;
    for (int i = 0; i < 5; i++) 
    {
        s->total_marks += s->marks[i];
    }
}

void print_student_info(const Student* s) 
{
    printf("\nName: %s\n", s->name);
    printf("Address: %s\n", s->address);
    printf("Std/Div: %s/%s\n", s->standard, s->division);
    printf("Total Marks: %d\n", s->total_marks);
    printf("Parents: %s, Contact: %s\n", s->parents_name, s->contact_number);
    printf("---------------------------\n");
}

void print_max_marks(const Student students[], int count) 
{
    if (count == 0) return;

    int max_marks = students[0].total_marks;
    
    for (int i = 1; i < count; i++) 
    {
        if (students[i].total_marks > max_marks) 
        {
            max_marks = students[i].total_marks;
        }
    }

    printf("\n\n*** Students with Maximum Marks (%d) ***\n", max_marks);
    
    for (int i = 0; i < count; i++) 
    {
        if (students[i].total_marks == max_marks) 
        {
            print_student_info(&students[i]);
        }
    }
}

void print_min_marks(const Student students[], int count) 
{
    if (count == 0) return;

    int min_marks = students[0].total_marks;
    
    for (int i = 1; i < count; i++) 
    {
        if (students[i].total_marks < min_marks)
        {
            min_marks = students[i].total_marks;
        }
    }

    printf("\n\n*** Students with Minimum Marks (%d) ***\n", min_marks);
    
    for (int i = 0; i < count; i++) {
        if (students[i].total_marks == min_marks) 
        {
            print_student_info(&students[i]);
        }
    }
}

void print_address_match(const Student students[], int count, const char* search_term) 
{
    printf("\n\n*** Students whose address contains \"%s\" ***\n", search_term);
    int found = 0;
    
    for (int i = 0; i < count; i++) 
    {
        if (strstr(students[i].address, search_term) != NULL) 
        {
            print_student_info(&students[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("No students found with \"%s\" in their address.\n", search_term);
    }
}

int main() 
{

    Student students[50];
    int current_students = 3; 

   
    strcpy(students[0].name, "Alice Johnson");
    strcpy(students[0].address, "Flat 101, Karve Road, Pune");
    strcpy(students[0].standard, "10th");
    strcpy(students[0].division, "A");
    students[0].marks[0] = 95; students[0].marks[1] = 92; students[0].marks[2] = 98; students[0].marks[3] = 95; students[0].marks[4] = 90; // Total 470
    strcpy(students[0].parents_name, "Mr. David Johnson");
    strcpy(students[0].contact_number, "9876543210");
    calculate_total_marks(&students[0]);

    strcpy(students[1].name, "Bob Smith");
    strcpy(students[1].address, "25, Main Street, Kothrud");
    strcpy(students[1].standard, "10th");
    strcpy(students[1].division, "B");
    students[1].marks[0] = 60; students[1].marks[1] = 65; students[1].marks[2] = 70; students[1].marks[3] = 62; students[1].marks[4] = 68; // Total 325
    strcpy(students[1].parents_name, "Ms. Jane Smith");
    strcpy(students[1].contact_number, "9988776655");
    calculate_total_marks(&students[1]);

    strcpy(students[2].name, "Charlie Brown");
    strcpy(students[2].address, "B-50, Karve Road Ext., Pune");
    strcpy(students[2].standard, "10th");
    strcpy(students[2].division, "A");
    students[2].marks[0] = 95; students[2].marks[1] = 92; students[2].marks[2] = 98; students[2].marks[3] = 95; students[2].marks[4] = 90; // Total 470
    strcpy(students[2].parents_name, "Mr. Kevin Brown");
    strcpy(students[2].contact_number, "9000011111");
    calculate_total_marks(&students[2]);

    print_max_marks(students, current_students);

    print_min_marks(students, current_students);

    print_address_match(students, current_students, "Karve Road");

    return 0;
}

/* Output 
*** Students with Maximum Marks (470) ***

Name: Alice Johnson
Address: Flat 101, Karve Road, Pune
Std/Div: 10th/A
Total Marks: 470
Parents: Mr. David Johnson, Contact: 9876543210
---------------------------

Name: Charlie Brown
Address: B-50, Karve Road Ext., Pune
Std/Div: 10th/A
Total Marks: 470
Parents: Mr. Kevin Brown, Contact: 9000011111
---------------------------


*** Students with Minimum Marks (325) ***

Name: Bob Smith
Address: 25, Main Street, Kothrud
Std/Div: 10th/B
Total Marks: 325
Parents: Ms. Jane Smith, Contact: 9988776655
---------------------------


*** Students whose address contains "Karve Road" ***

Name: Alice Johnson
Address: Flat 101, Karve Road, Pune
Std/Div: 10th/A
Total Marks: 470
Parents: Mr. David Johnson, Contact: 9876543210
---------------------------

Name: Charlie Brown
Address: B-50, Karve Road Ext., Pune
Std/Div: 10th/A
Total Marks: 470
Parents: Mr. Kevin Brown, Contact: 9000011111
---------------------------
*/