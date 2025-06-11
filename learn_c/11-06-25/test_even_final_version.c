#include <stdio.h>

int main(void) {
    int number;
    char term;
    char choice;

    do {
        // Input validation loop
        while (1) {
            printf("Enter an integer: ");
            if (scanf("%d%c", &number, &term) == 2 && term == '\n') {
                break;
            } else {
                printf("Invalid input! Please enter a valid integer.\n");

                // Clear the input buffer
                while ((term = getchar()) != '\n' && term != EOF) {
                    // discard characters until newline
                }
            }
        }

        // Classify the number
        if (number == 0) {
            printf("The number is zero.\n");
        } else {
            if (number > 0)
                printf("The number is positive.\n");
            else
                printf("The number is negative.\n");

            if (number % 2 == 0)
                printf("It's an even number.\n");
            else
                printf("It's an odd number.\n");
        }

        // Ask user if they want to continue
        printf("Do you want to enter another number? (y/n): ");
        // space before %c to skip leftover newlines
        scanf(" %c", &choice);

        // Clear any extra input
        while ((term = getchar()) != '\n' && term != EOF) {
            // discard
        }

    } while (choice == 'y' || choice == 'Y');

    printf("Goodbye!\n");

    return 0;
}

