#include <stdio.h>
#include <string.h> // for strlen and strcpy, strcat

int main() {
    char firstName[50];
    char lastName[50];
    char fullName[100];

    // Ask for first name
    printf("Enter your first name: ");
    fgets(firstName, sizeof(firstName), stdin);
    firstName[strcspn(firstName, "\n")] = '\0'; // Remove newline

    // Ask for last name
    printf("Enter your last name: ");
    fgets(lastName, sizeof(lastName), stdin);
    lastName[strcspn(lastName, "\n")] = '\0'; // Remove newline

    // Combine the names
    strcpy(fullName, firstName);      // Copy first name into fullName
    strcat(fullName, " ");            // Add space
    strcat(fullName, lastName);       // Add last name

    printf("Hello, %s!\n", fullName);

    return 0;
}

