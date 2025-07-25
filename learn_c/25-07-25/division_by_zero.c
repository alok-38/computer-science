#include <stdio.h>

float handleDivisionByZero(float numerator, float denominator);

float quotient;

int main() {
    float numerator, denominator;

    printf("Numerator: ");
    scanf("%f", &numerator);
    printf("Denominator: ");
    scanf("%f", &denominator);
    
    if (denominator == 0) {
        handleDivisionByZero(numerator, denominator);
    } else {
        printf("Quotient = %f\n", quotient = numerator / denominator);
    }

    return 0;
}

float handleDivisionByZero(float numerator, float denominator) {
    if (denominator == 0) {
        printf("Error! Division by zero.\n");
        return 0.0;  // ✅ ensure return
    } else {
        float quotient = numerator / denominator;
        printf("Quotient: %f\n", quotient);
        return quotient;
    }
}

