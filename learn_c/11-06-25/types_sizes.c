#include <stdio.h>
#include <stdbool.h> // For bool, true, false

int main()
{
    bool flag = false;
    char ch = 'A';
    int number = 100;
    float pi = 3.14f;
    double e = 2.718281828;

    printf("bool:   Value = %d, Size = %zu bytes\n", flag, sizeof(bool));
    printf("char:   Value = %c, Size = %zu bytes\n", ch, sizeof(char));
    printf("int:    Value = %d, Size = %zu bytes\n", number, sizeof(int));
    printf("float:  Value = %.2f, Size = %zu bytes\n", pi, sizeof(float));
    printf("double: Value = %.5lf, Size = %zu bytes\n", e, sizeof(double));

    return 0;
}
