#include <stdio.h>

void demoFunction()
{
    auto int autoVar = 0;     // Automatic variable
    static int staticVar = 0; // Static variable

    autoVar++;
    staticVar++;

    printf("autoVar = %d, staticVar = %d\n", autoVar, staticVar);
}

int main()
{
    printf("Calling demoFunction 1st time:\n");
    demoFunction();

    printf("Calling demoFunction 2nd time:\n");
    demoFunction();

    printf("Calling demoFunction 3rd time:\n");
    demoFunction();

    return 0;
}
