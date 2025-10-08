// 7.Write a program which contains a structure to specify data of students given below: Roll number, name, department, course, year of joining. Write a function to print names of students who joined in particular year.

#include <stdio.h>
#include <string.h>

typedef struct 
{
    int roll_number;
    char name[50];
    char department[30];
    char course[30];
    int year_of_joining;
} Student_7;

void print_students_by_year(const Student_7 students[], int count, int year) 
{
    printf("\n--- Students who joined in %d ---\n", year);
    int found = 0;
    
    for (int i = 0; i < count; i++) {
        if (students[i].year_of_joining == year) {
            printf("  - Roll No: %d, Name: %s\n", students[i].roll_number, students[i].name);
            found = 1;
        }
    }

    if (!found) {
        printf("No students found who joined in %d.\n", year);
    }
}

int main() {
    // Array of student structures (sample data)
    Student_7 student_records[] = {
        {101, "Ethan Hunt", "CSE", "B.Tech", 2022},
        {102, "Ilsa Faust", "ECE", "B.Tech", 2023},
        {103, "Benji Dunn", "CSE", "B.Tech", 2022},
        {104, "Luther Stickell", "MECH", "M.Tech", 2023},
        {105, "Agent 007", "PHY", "B.Sc", 2021}
    };
    int num_records = 5;

    int search_year_1 = 2022;
    printf("Searching for students who joined in: %d", search_year_1);
    print_students_by_year(student_records, num_records, search_year_1);
    
    int search_year_2 = 2023;
    printf("\nSearching for students who joined in: %d", search_year_2);
    print_students_by_year(student_records, num_records, search_year_2);

    return 0;
}

/* Output 
Searching for students who joined in: 2022
--- Students who joined in 2022 ---
  - Roll No: 101, Name: Ethan Hunt
  - Roll No: 103, Name: Benji Dunn

Searching for students who joined in: 2023
--- Students who joined in 2023 ---
  - Roll No: 102, Name: Ilsa Faust
  - Roll No: 104, Name: Luther Stickell
*/