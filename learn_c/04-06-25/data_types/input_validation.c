#include <stdio.h>
#include <ctype.h>

int main(void) {
    int age = 0;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar();  // Consume leftover newline from previous scanf

    printf("Enter your grade (lower or upper case): ");
    scanf("%c", &grade);

    if (age < 0 || !(isalpha(grade))) {
        printf("Invalid input: Age cannot be negative and grade must be a letter!\n");
    } else {
        printf("Age: %d, Grade: %c\n", age, toupper(grade));
    }

    return 0;
}

