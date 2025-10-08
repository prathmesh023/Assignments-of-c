// 8.Write a program which creates a structure to specify data of customers in bank. The data to be stored is: Account number, name, and balance in account. Write a function withdrawal and deposited by using about structure.

#include <stdio.h>
#include <string.h>

typedef struct 
{
    long account_number;
    char name[50];
    double balance;
} Customer;

void withdrawal(Customer* c, double amount) 
{
    printf("\nAttempting withdrawal of $%.2f from A/C %ld...\n", amount, c->account_number);
    if (amount <= 0) 
    {
        printf("Error: Withdrawal amount must be positive.\n");
    } else if (c->balance >= amount) 
    {
        c->balance -= amount;
        printf("Success! New balance: $%.2f\n", c->balance);
    } else 
    {
        printf("Error: Insufficient funds. Current balance: $%.2f\n", c->balance);
    }
}

void deposit(Customer* c, double amount)
{
    printf("\nAttempting deposit of $%.2f to A/C %ld...\n", amount, c->account_number);
    if (amount <= 0) {
        printf("Error: Deposit amount must be positive.\n");
    } else {
        c->balance += amount;
        printf("Success! New balance: $%.2f\n", c->balance);
    }
}

int main()
{
    Customer customer1;
    customer1.account_number = 9876543210;
    strcpy(customer1.name, "Bruce Wayne");
    customer1.balance = 5000.00;

    printf("--- Initial Account Details ---\n");
    printf("Account: %ld, Name: %s, Balance: $%.2f\n", 
           customer1.account_number, customer1.name, customer1.balance);

    deposit(&customer1, 1500.75); 

    withdrawal(&customer1, 2000.00); 

    withdrawal(&customer1, 7000.00); 

    printf("\n--- Final Account Details ---\n");
    printf("Account: %ld, Name: %s, Balance: $%.2f\n", 
           customer1.account_number, customer1.name, customer1.balance);

    return 0;
}

/* Output 
--- Initial Account Details ---
Account: 9876543210, Name: Bruce Wayne, Balance: $5000.00

Attempting deposit of $1500.75 to A/C 9876543210...
Success! New balance: $6500.75

Attempting withdrawal of $2000.00 from A/C 9876543210...
Success! New balance: $4500.75

Attempting withdrawal of $7000.00 from A/C 9876543210...
Error: Insufficient funds. Current balance: $4500.75

--- Final Account Details ---
Account: 9876543210, Name: Bruce Wayne, Balance: $4500.75
*/