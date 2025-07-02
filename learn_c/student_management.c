#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

// Define a structure for Student
struct Student
{
    int roll;
    char name[50];
    float marks;
};

// Function prototypes
void addStudent(struct Student students[], int *count);
void displayStudents(struct Student students[], int count);
void searchStudent(struct Student students[], int count, int roll);

// Function definitions
void addStudent(struct Student students[], int *count)
{
    if (*count >= MAX_STUDENTS)
    {
        printf("Student limit reached.\n");
        return;
    }

    struct Student newStudent;

    printf("Enter roll number: ");
    scanf("%d", &newStudent.roll);
    getchar(); // consume newline

    printf("Enter name: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0'; // remove newline

    printf("Enter marks: ");
    scanf("%f", &newStudent.marks);

    students[*count] = newStudent;
    (*count)++;

    printf("Student added successfully.\n");
}

void displayStudents(struct Student students[], int count)
{
    if (count == 0)
    {
        printf("No students to display.\n");
        return;
    }

    printf("\nList of Students:\n");
    for (int i = 0; i < count; i++)
    {
        printf("Roll: %d | Name: %s | Marks: %.2f\n",
               students[i].roll, students[i].name, students[i].marks);
    }
}

void searchStudent(struct Student students[], int count, int roll)
{
    for (int i = 0; i < count; i++)
    {
        if (students[i].roll == roll)
        {
            printf("Student Found:\n");
            printf("Roll: %d | Name: %s | Marks: %.2f\n",
                   students[i].roll, students[i].name, students[i].marks);
            return;
        }
    }
    printf("Student with roll number %d not found.\n", roll);
}

int main()
{
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice, roll;

    do
    {
        printf("\n==== Student Management System ====\n");
        printf("1. Add Student\n");
        printf("2. View All Students\n");
        printf("3. Search by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // consume newline

        switch (choice)
        {
        case 1:
            addStudent(students, &count);
            break;
        case 2:
            displayStudents(students, count);
            break;
        case 3:
            printf("Enter roll number to search: ");
            scanf("%d", &roll);
            searchStudent(students, count, roll);
            break;
        case 4:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
