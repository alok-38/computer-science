#include <math.h>
#include <stdio.h>

int main()
{
    double a = 0.1;
    double b = 0.2;
    double sum = a + b;
    double expected = 0.3;
    double epsilon = 1e-9;

    if (fabs(sum - expected) < epsilon)
        printf("Approximately equal\n");
    else
        printf("Not equal\n");

    return 0;
}
