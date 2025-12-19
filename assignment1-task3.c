#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int length;

    // Ask user for a full name
    printf("Please enter your full name: ");
    fgets(name, sizeof(name), stdin);   // reads full line including spaces

    // Remove newline character added by fgets
    name[strcspn(name, "\n")] = '\0';

    // Print the name back
    printf("You entered: %s\n", name);

    // Calculate length
    length = strlen(name);

    // Display length
    printf("The length of your string is %d\n", length);

    return 0;
}

