#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double accumulator, next_number;
    char operator;

    // Get the first number
    printf("Enter a number: ");
    if (scanf("%lf", &accumulator) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    while (1) {
        // Get the operator
        printf("Enter operator (+, -, *, / or q to quit): ");
        scanf(" %c", &operator);

        if (operator == 'q' || operator == 'Q') {
            printf("Goodbye!\n");
            break;
        }

        // Get the next number
        printf("Enter next number: ");
        if (scanf("%lf", &next_number) != 1) {
            printf("Invalid input.\n");
            break;
        }

        // Perform the operation
        switch (operator) {
            case '+':
                accumulator += next_number;
                break;
            case '-':
                accumulator -= next_number;
                break;
            case '*':
                accumulator *= next_number;
                break;
            case '/':
                if (next_number == 0) {
                    printf("Error: Division by zero!\n");
                    continue;  // Skip printing result, ask for operator again
                }
                accumulator /= next_number;
                break;
            default:
                printf("Invalid operator.\n");
                continue;  // Ask for operator again
        }

        // Print current result (accumulator)
        printf("Result: %lf\n", accumulator);
    }

    return 0;
}

