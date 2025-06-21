#include <stdio.h>

void explainVariables()
{
    // Integer variable
    int age = 45;
    printf("Integer: age = %d\n", age);

    // Float variable
    float temperature = 36.6;
    printf("Float: temperature = %.1f\n", temperature);

    // Double variable
    double pi = 3.1415926535;
    printf("Double: pi = %.10f\n", pi);

    // Character variable
    char grade = 'A';
    printf("Character: grade = %c\n", grade);

    // string (char arrray)
    char name[] = "Alice";
    printf("String (char array): name = %s\n", name);

    // Boolean-like variable using int (C89 doesn't have bool)
    int isStudent = 1; // 1 for true, 0 for false
    printf("Boolean-like: isStudent = %s\n", isStudent ? "true" : "false");

    // Constants using const keyword
    const int DAYS_IN_WEEK = 7;
    printf("Constant: DAYS_IN_WEEK = %d\n", DAYS_IN_WEEK);
}

int main(int argc, const char *argv[])
{
    explainVariables();
    return 0;
}
