#include <stdio.h>

int main() {
    int num1, num2;

    // Taking input from the user
    printf("Please enter your first number:\n");
    scanf("%d", &num1);

    printf("Please enter your second number: ");
    scanf("%d", &num2);

    // Performing operations
    printf("\n--- Results ---\n");
    printf("Addition: %d\n", num1 + num2);
    printf("Subtraction: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);

    // Checking division by zero
    if (num2 != 0) {
        printf("Division: %d\n", num1 / num2);
        printf("Modulus: %d\n", num1 % num2);
    } else {
        printf("Division: Error! Cannot divide by zero.\n");
        printf("Modulus: Error! Cannot take modulus by zero.\n");
    }

    return 0;
}
