#include <stdio.h>

int main() {
    int age;
    float pi;
    char grade;

    // Prompting and reading user input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter the value of Pi: ");
    scanf("%f", &pi);

    // A space before %c in scanf helps to ignore leftover newline characters
    printf("Enter your grade: ");
    scanf(" %c", &grade);

    // Displaying the results
    printf("\n--- User Input Summary ---\n");
    printf("Age: %d\n", age);
    printf("Pi: %.2f\n", pi);
    printf("Grade: %c\n", grade);

    return 0;
}

