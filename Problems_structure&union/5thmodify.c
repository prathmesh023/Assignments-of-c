// 5.Write a program which contains student structure and pass that structure to a function and modify marks of that student and return the modified structure.

#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[50];
    int marks;
    char grade;
} Student;

void print_student_info_5(const Student* s) 
{
    printf("Name: %s\n", s->name);
    printf("Marks: %d\n", s->marks);
    printf("Grade: %c\n", s->grade);
}

Student modify_marks(Student s, int new_marks) 
{
    s.marks = new_marks;

    if (s.marks >= 90) 
    {
        s.grade = 'A';
    } else if (s.marks >= 80) 
    {
        s.grade = 'B';
    } else if (s.marks >= 70) 
    {
        s.grade = 'C';

    } else 
    {
        s.grade = 'D';
    }
    
    return s;
}

int main() 
{
    Student student1;
    strcpy(student1.name, "Diana Prince");
    student1.marks = 75; 
    student1.grade = 'C';

    printf("--- Original Student Info ---\n");
    print_student_info_5(&student1);

    int updated_marks = 95;
    printf("\nModifying marks to %d...\n", updated_marks);
    
   
    student1 = modify_marks(student1, updated_marks); 

    printf("\n--- Modified Student Info ---\n");
    print_student_info_5(&student1);

    return 0;
}

/* Output 
--- Original Student Info ---
Name: Diana Prince
Marks: 75
Grade: C

Modifying marks to 95...

--- Modified Student Info ---
Name: Diana Prince
Marks: 95
Grade: A
*/