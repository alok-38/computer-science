#include <stdio.h>

struct Person
{
    char name[50];
    int age;
};

int main()
{
    struct Person person1;

    // Assign values
    strcpy(person1.name, "Alok");
    person1.age = 40;

    // Access values
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
}
