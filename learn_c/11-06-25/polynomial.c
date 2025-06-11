#include <stdio.h>

int main()
{
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    float evaluate = (3 * x * x * x * x) - (5 * x * x) + 6;
    printf("%.2f\n", evaluate);
}