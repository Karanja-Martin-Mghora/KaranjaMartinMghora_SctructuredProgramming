#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Global variables
float balance = 1000.0;        // initial balance
const char stored_pin[] = "1234"; // predefined PIN

// Function prototypes
int login();
void showMenu();
void checkBalance();
void deposit();
void withdraw();

int main() {
    // Login
    if (!login()) {
        return 0; // exit if login fails
    }

    int choice;
    while (1) {
        showMenu();
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n\n");
            while(getchar() != '\n'); // clear input buffer
            continue;
        }

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n\n");
        }
    }

    return 0;
}

// Login function
int login() {
    char pin[10];
    int attempts = 3;

    while (attempts > 0) {
        printf("Enter your PIN: ");
        scanf("%s", pin);

        if (strcmp(pin, stored_pin) == 0) {
            printf("\nLogin successful!\n\n");
            return 1; // success
        } else {
            attempts--;
            printf("Incorrect PIN. Attempts remaining: %d\n", attempts);
        }
    }

    printf("Maximum attempts exceeded. Access denied.\n");
    return 0; // failed
}

// Display menu
void showMenu() {
    printf("=== ATM Menu ===\n");
    printf("1. Balance Inquiry\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n\n");
}

// Check balance
void checkBalance() {
    printf("Your current balance is: $%.2f\n\n", balance);
}

// Deposit money
void deposit() {
    float amount;
    printf("Enter amount to deposit: ");
    if (scanf("%f", &amount) != 1) {
        printf("Invalid input. Please enter a number.\n\n");
        while(getchar() != '\n'); // clear input buffer
        return;
    }

    if (amount <= 0) {
        printf("Deposit amount must be positive.\n\n");
    } else {
        balance += amount;
        printf("$%.2f deposited successfully.\n\n", amount);
    }
}

// Withdraw money
void withdraw() {
    float amount;
    printf("Enter amount to withdraw: ");
    if (scanf("%f", &amount) != 1) {
        printf("Invalid input. Please enter a number.\n\n");
        while(getchar() != '\n'); // clear input buffer
        return;
    }

    if (amount <= 0) {
        printf("Withdrawal amount must be positive.\n\n");
    } else if (amount > balance) {
        printf("Insufficient balance.\n\n");
    } else {
        balance -= amount;
        printf("$%.2f withdrawn successfully.\n\n", amount);
    }
}
