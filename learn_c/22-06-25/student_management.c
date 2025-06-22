#include <stdio.h>
#include <string.h>

// Define a structure to represent a student
struct Student {
    int id;
    char name[50];
    float marks;
};

// Function declarations
void inputStudent(struct Student *s);
void displayStudent(struct Student s);

int main() {
    struct Student s1;

    inputStudent(&s1);         // Pass by reference to fill student data
    displayStudent(s1);        // Pass by value to display student data

    return 0;
}

// Function to input student data
void inputStudent(struct Student *s) {
    printf("Enter student ID: ");
    scanf("%d", &s->id);

    printf("Enter student name: ");
    scanf(" %[^\n]", s->name);  // Reads full name with spaces

    printf("Enter student marks: ");
    scanf("%f", &s->marks);
}

// Function to display student data
void displayStudent(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("ID    : %d\n", s.id);
    printf("Name  : %s\n", s.name);
    printf("Marks : %.2f\n", s.marks);
}

