// 6.Write a program which contains structures as Car (name, type, price, color), Sales_Person (name, designation, pointer to car structure), Car_Showroom (Name, address, Brand name, pointer to Sales_Person structure). Accept name of sales person from user and print all information of cars which are sold by that sales person.

#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[30];
    char type[20];
    float price;
    char color[20];
} Car;

typedef struct 
{
    char name[50];
    char designation[30];
    Car* sold_cars; 
    int num_cars_sold;
} Sales_Person;

typedef struct 
{
    char name[50];
    char address[100];
    char brand_name[30];
    Sales_Person* employees; 
    int num_employees;
} Car_Showroom;

void print_car_info(const Car* c) 
{
    printf("  - Car Name: %s\n", c->name);
    printf("    Type: %s, Color: %s\n", c->type, c->color);
    printf("    Price: $%.2f\n", c->price);
}

void print_sales_person_cars(const Car_Showroom* showroom, const char* sp_name) 
{
    printf("\n--- Searching for Sales Person: %s ---\n", sp_name);
    int sp_found = 0;

    for (int i = 0; i < showroom->num_employees; i++) 
    {
        if (strcmp(showroom->employees[i].name, sp_name) == 0) 
        {
            sp_found = 1;
            const Sales_Person* sp = &showroom->employees[i];
            
            printf("Sales Person Found: %s (%s)\n", sp->name, sp->designation);

            if (sp->num_cars_sold > 0) {
                printf("Total Cars Sold: %d\n", sp->num_cars_sold);
                printf("List of Cars Sold:\n");
                for (int j = 0; j < sp->num_cars_sold; j++) 
                {
                    print_car_info(&sp->sold_cars[j]);
                }
            } else 
            {
                printf("%s has not sold any cars yet.\n", sp->name);
            }
            return; 
        }
    }

    if (!sp_found) 
    {
        printf("Error: Sales Person '%s' not found in the showroom.\n", sp_name);
    }
}

int main() 
{
    Car model_A = {"Model A", "Sedan", 25000.00, "Red"};
    Car model_B = {"Model B", "SUV", 45000.00, "Black"};
    Car model_C = {"Model C", "Hatchback", 18000.00, "White"};
    
    Sales_Person employee1;
    strcpy(employee1.name, "John Doe");
    strcpy(employee1.designation, "Senior Manager");
    employee1.num_cars_sold = 2;
    employee1.sold_cars = (Car*)malloc(employee1.num_cars_sold * sizeof(Car));
    employee1.sold_cars[0] = model_A;
    employee1.sold_cars[1] = model_C;

    Sales_Person employee2;
    strcpy(employee2.name, "Jane Smith");
    strcpy(employee2.designation, "Sales Executive");
    employee2.num_cars_sold = 1;
    employee2.sold_cars = (Car*)malloc(employee2.num_cars_sold * sizeof(Car));
    employee2.sold_cars[0] = model_B;

    Sales_Person employees_array[] = {employee1, employee2};
    
    Car_Showroom best_auto;
    strcpy(best_auto.name, "Best Auto Showroom");
    strcpy(best_auto.address, "123 Showroom Road, City");
    strcpy(best_auto.brand_name, "Global Motors");
    best_auto.employees = employees_array; 
    best_auto.num_employees = 2;

    char search_name[50] = "John Doe"; 

    print_sales_person_cars(&best_auto, search_name);

    strcpy(search_name, "Jane Smith");
    print_sales_person_cars(&best_auto, search_name);

    free(employee1.sold_cars);
    free(employee2.sold_cars);

    return 0;
}



/* Output 
--- Searching for Sales Person: John Doe ---
Sales Person Found: John Doe (Senior Manager)
Total Cars Sold: 2
List of Cars Sold:
  - Car Name: Model A
    Type: Sedan, Color: Red
    Price: $25000.00
  - Car Name: Model C
    Type: Hatchback, Color: White
    Price: $18000.00

--- Searching for Sales Person: Jane Smith ---
Sales Person Found: Jane Smith (Sales Executive)
Total Cars Sold: 1
List of Cars Sold:
  - Car Name: Model B
    Type: SUV, Color: Black
    Price: $45000.00
*/