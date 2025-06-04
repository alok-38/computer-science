#include <stdio.h>
#include <math.h>

int main(void) {
    double value_1, value_2;
    char operator;

    printf("Enter some value: ");
    scanf("%lf", &value_1);

    if (fmod(value_1, 1.0) == 0.0) {
        printf("It's a whole number\n");

        if (fmod(value_1, 2.0) == 0.0) {
            printf("It's even\n");
        } else {
            printf("It's odd\n");
        }
    } else {
        printf("It's a fractional number\n");
    }

    // Ask for operator and perform operation for both whole and fractional numbers
    printf("What operation would you like to perform? ");
    scanf(" %c", &operator);  // space to ignore leftover newline

    switch (operator) {
        case '+':
            printf("Enter another value: ");
            scanf("%lf", &value_2);
            printf("%lf + %lf = %lf\n", value_1, value_2, value_1 + value_2);
            break;

        case '-':
            printf("Enter another value: ");
            scanf("%lf", &value_2);
            printf("%lf - %lf = %lf\n", value_1, value_2, value_1 - value_2);
            break;

        case '*':
            printf("Enter another value: ");
            scanf("%lf", &value_2);
            printf("%lf * %lf = %lf\n", value_1, value_2, value_1 * value_2);
            break;

        case '/':
            printf("Enter another value: ");
            scanf("%lf", &value_2);
            if (value_2 == 0) {
                printf("Error: Division by zero!\n");
            } else {
                printf("%lf / %lf = %lf\n", value_1, value_2, value_1 / value_2);
            }
            break;

        default:
            printf("No valid operation selected. Done.\n");
    }

    return 0;
}

