#include <stdio.h>
#include <math.h>

int main()
{
    double value_1 = 3.31 * pow(10, -8);
    double value_2 = 2.01 * pow(10, -7);
    double value_3 = 7.16 * pow(10, -6);
    double value_4 = 2.01 * pow(10, -8);

    double result = (value_1 * value_2) / (value_3 + value_4);

    printf("Result = %.10e\n", result); 
    return 0;
}
