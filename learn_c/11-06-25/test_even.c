#include <stdio.h>

int main(void) {
    printf("Enter a number: ");
    int number = 0;
    scanf("%i", &number);

    if (number % 2 == 0) {
        printf("It's an even number.\n");
    } else {
        printf("It's an odd number.\n");
    }

    return 0;
}

