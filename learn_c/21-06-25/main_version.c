#include <stdio.h>
#include <string.h>

// Define a struct to represent a person
struct Person
{
    char name[50];
    int age;
    float height;
};

void explainVariables()
{
    // --- 1. User Input ---
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("You entered: %d\n\n", number);

    // Arrays
    int numbers[] = {1, 2, 3, 4, 5};
    printf("Array elements: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", numbers[i]);
    }
    printf("\n\n");

    // --- 3. Pointers ---
    int a = 10;
    int *ptr = &a;
    printf("Pointer example:\n");
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void *)&a);
    printf("Value using pointer: %d\n\n", *ptr);

    // --- 4. Struct ---
    struct Person person1;
    strcpy(person1.name, "Alice");
    person1.age = 30;
    person1.height = 1.65f;

    printf("Struct example:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f meters\n", person1.height);
}

int main(int argc, const char *argv[])
{
    explainVariables();
    return 0;
}
