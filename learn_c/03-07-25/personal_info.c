#include <stdio.h>

int main()
{
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    char DOB[100];
    printf("Enter your DOB: ");
    fgets(DOB, sizeof(DOB), stdin);
    printf("Enter your mobile number: ");
    char mobile_number[100];
    fgets(mobile_number, sizeof(mobile_number), stdin);
    printf("Name\t: %s\n", name);
    printf("DOB\t: %s\n", DOB);
    printf("Mobile\t: %s\n", mobile_number);
}
