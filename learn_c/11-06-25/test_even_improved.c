#include <stdio.h>

int main(void) {
    int number;
    char term;

    printf("Enter an integer: ");

    // Check if input is a valid integer, and ensure nothing extra was typed
    if (scanf("%d%c", &number, &term) != 2 || term != '\n') {
        printf("Invalid input! Please enter a valid integer.\n");
        return 1;
    }

    // Check for zero
    if (number == 0) {
        printf("The number is zero.\n");
    } else {
        // Positive or negative
        if (number > 0) {
            printf("The number is positive.\n");
        } else {
            printf("The number is negative.\n");
        }

        // Even or odd
         if (number % 2 == 0) {
            printf("It's an even number.\n");
        } else {
            printf("It's an odd number.\n");
        }
    }

    return 0;
}
