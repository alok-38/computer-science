#include <stdio.h>
#include <ctype.h>

int main(void) {
    int age = 0;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);


    if (age < 0 && isupper(grade) || islower(grade)) {
        printf("Age cannot be negative and grade needs to be a letter!\n");
    }

    printf("Enter your grade(lower or upper case): ");
    scanf("%c", &grade);

    return 0;
}

