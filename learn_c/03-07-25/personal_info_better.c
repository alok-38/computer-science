#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove newline

    char DOB[100];
    printf("Enter your DOB: ");
    fgets(DOB, sizeof(DOB), stdin);
    DOB[strcspn(DOB, "\n")] = '\0'; // Remove newline

    char mobile_number[100];
    printf("Enter your mobile number: ");
    fgets(mobile_number, sizeof(mobile_number), stdin);
    mobile_number[strcspn(mobile_number, "\n")] = '\0'; // Remove newline

    printf("\nName\t: %s\n", name);
    printf("DOB\t: %s\n", DOB);
    printf("Mobile\t: %s\n", mobile_number);

    return 0;
}
