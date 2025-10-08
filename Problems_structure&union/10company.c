// 10.Write a program which contains structure as company (name, location, founded year, array of employees, array of projects, array of pointers which holds information of employees), employee (name, designation, department, contact, pointer to company structure), project (project name, team size, technology used, starting date, ending date).
// Accept name of project from user and print information if all employees working on that project.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Company Company;

typedef struct 
{
    int id; 
    char name[50];
    char designation[30];
    char department[30];
    char contact[15];
    Company *company_ptr; 
} Employee;

typedef struct 
{
    char project_name[50];
    int team_size;
    char technology_used[50];
    char start_date[15];
    char end_date[15];
    int employee_ids[10]; 
    int num_employees_on_project;
} Project;

struct Company 
{
    char name[50];
    char location[50];
    int founded_year;
    
    Employee employees[50]; 
    int num_employees;

    Project projects[10];
    int num_projects;

    Employee* employee_ptrs[50]; 
};

void print_employee_info(const Employee* e) 
{
    printf("  [ID: %d] Name: %s, Designation: %s, Dept: %s, Contact: %s\n",
           e->id, e->name, e->designation, e->department, e->contact);
}

const Employee* find_employee_by_id(const Company* c, int id) 
{
    for (int i = 0; i < c->num_employees; i++) 
    {
        if (c->employees[i].id == id) 
        {
            return &c->employees[i];
        }
    }
    return NULL;
}

void print_employees_on_project(const Company* c, const char* project_name) 
{
    printf("\n--- Searching for Project: %s ---\n", project_name);
    int project_found = 0;
    
    for (int i = 0; i < c->num_projects; i++) {
        if (strcmp(c->projects[i].project_name, project_name) == 0) {
            project_found = 1;
            const Project* p = &c->projects[i];
            
            printf("Project Found: %s\n", p->project_name);
            printf("Tech Used: %s, Team Size: %d, Employees on Record: %d\n", 
                   p->technology_used, p->team_size, p->num_employees_on_project);
            printf("Employees Working on this Project:\n");
            
            if (p->num_employees_on_project == 0) {
                printf("  No employees listed for this project.\n");
            } else {
                for (int j = 0; j < p->num_employees_on_project; j++) {
                    // Look up employee info using the stored ID
                    const Employee* emp = find_employee_by_id(c, p->employee_ids[j]);
                    if (emp) {
                        print_employee_info(emp);
                    } else {
                        printf("  Error: Employee with ID %d not found in company records.\n", p->employee_ids[j]);
                    }
                }
            }
            return; // Exit after finding the project
        }
    }

    if (!project_found) {
        printf("Error: Project '%s' not found.\n", project_name);
    }
}

int main() {
    Company tech_corp;
    strcpy(tech_corp.name, "TechCorp Solutions");
    strcpy(tech_corp.location, "Bangalore");
    tech_corp.founded_year = 2005;
    tech_corp.num_employees = 3;
    tech_corp.num_projects = 2;

    // 1. Initialize Employees
    tech_corp.employees[0] = (Employee){1001, "Alice", "Developer", "IT", "9876543210", &tech_corp};
    tech_corp.employees[1] = (Employee){1002, "Bob", "Tester", "QA", "9988776655", &tech_corp};
    tech_corp.employees[2] = (Employee){1003, "Charlie", "Manager", "IT", "9000011111", &tech_corp};
    
    // Set up employee pointers array (optional step)
    for(int i = 0; i < tech_corp.num_employees; i++) {
        tech_corp.employee_ptrs[i] = &tech_corp.employees[i];
    }

    // 2. Initialize Projects
    // Project 1: Team has Alice and Bob
    Project p1 = {"Alpha_Web", 2, "React/Node", "01-01-2024", "01-07-2024"};
    p1.employee_ids[0] = 1001; // Alice
    p1.employee_ids[1] = 1002; // Bob
    p1.num_employees_on_project = 2;
    tech_corp.projects[0] = p1;

    // Project 2: Team has Charlie
    Project p2 = {"Beta_App", 1, "Flutter/Dart", "15-03-2024", "30-09-2024"};
    p2.employee_ids[0] = 1003; // Charlie
    p2.num_employees_on_project = 1;
    tech_corp.projects[1] = p2;
    
    printf("Company: %s, Location: %s\n", tech_corp.name, tech_corp.location);

    // Accept name of project from user (simulated input for consistent output)
    char search_project_1[50] = "Alpha_Web"; 
    print_employees_on_project(&tech_corp, search_project_1);
    
    char search_project_2[50] = "Beta_App"; 
    print_employees_on_project(&tech_corp, search_project_2);

    return 0;
}

/* Output 
Company: TechCorp Solutions, Location: Bangalore

--- Searching for Project: Alpha_Web ---
Project Found: Alpha_Web
Tech Used: React/Node, Team Size: 2, Employees on Record: 2
Employees Working on this Project:
  [ID: 1001] Name: Alice, Designation: Developer, Dept: IT, Contact: 9876543210
  [ID: 1002] Name: Bob, Designation: Tester, Dept: QA, Contact: 9988776655

--- Searching for Project: Beta_App ---
Project Found: Beta_App
Tech Used: Flutter/Dart, Team Size: 1, Employees on Record: 1
Employees Working on this Project:
  [ID: 1003] Name: Charlie, Designation: Manager, Dept: IT, Contact: 9000011111
*/