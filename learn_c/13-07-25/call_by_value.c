#include <stdio.h>

int multiply(value_1, value_2);

int main(void)
{
    int retrive_value;
    retrive_value = multiply(6, 7);
    printf("Answer: %i\n", retrive_value);
}

int multiply(value_1, value_2)
{
    int result = value_1 * value_2;
    return result;
}
