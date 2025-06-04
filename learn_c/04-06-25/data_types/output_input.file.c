#include <stdio.h>

int main() {
    int age;
    float pi;
    char grade;

    // Get user input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter the value of Pi: ");
    scanf("%f", &pi);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    // Print to console
    printf("\n--- User Input Summary ---\n");
    printf("Age: %d\n", age);
    printf("Pi: %.2f\n", pi);
    printf("Grade: %c\n", grade);

    // Open file to write
    FILE *file = fopen("data.txt", "w");
    if (!file) {
        perror("Failed to open file");
        return 1;
    }

    // Write data to file
    fprintf(file, "--- User Input Summary ---\n");
    fprintf(file, "Age: %d\n", age);
    fprintf(file, "Pi: %.2f\n", pi);
    fprintf(file, "Grade: %c\n", grade);

    // Close file
    fclose(file);

    printf("Data saved to data.txt\n");

    return 0;
}

