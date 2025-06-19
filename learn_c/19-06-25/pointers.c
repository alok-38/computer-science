#include <stdio.h>

int main()
{
    // Declare variables of different types
    char char_value = 'A'; // ASCII 65
    int int_value = 123;
    float float_value = 3.14f;

    // Declare pointers to each type
    char *char_pointer = &char_value;
    int *int_pointer = &int_value;
    float *float_pointer = &float_value;

    // Print values and their addresses
    printf("CHAR:\n");
    printf("  Value: %c\n", char_value);
    printf("  Address: %p\n", (void *)&char_value);
    printf("  Pointer: %p\n", (void *)char_pointer);
    printf("  Dereferenced: %c\n\n", *char_pointer);

    printf("INT:\n");
    printf("  Value: %d\n", int_value);
    printf("  Address: %p\n", (void *)&int_value);
    printf("  Pointer: %p\n", (void *)int_pointer);
    printf("  Dereferenced: %d\n\n", *int_pointer);

    printf("FLOAT:\n");
    printf("  Value: %.2f\n", float_value);
    printf("  Address: %p\n", (void *)&float_value);
    printf("  Pointer: %p\n", (void *)float_pointer);
    printf("  Dereferenced: %.2f\n", *float_pointer);

    return 0;
}
