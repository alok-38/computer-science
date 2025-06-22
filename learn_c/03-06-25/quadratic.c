#include <stdio.h>
#include <math.h>

// Struct to hold real roots
typedef struct {
    int num_roots; // 0 = complex, 1 = one root, 2 = two real roots
    float root1;
    float root2;
} Roots;

Roots solve_quadratic(float a, float b, float c);

int main(void) {
    Roots roots = solve_quadratic(1, -3, 2);

    if (roots.num_roots == 2) {
        printf("Two real roots: %.2f and %.2f\n", roots.root1, roots.root2);
    } else if (roots.num_roots == 1) {
        printf("One real root: %.2f\n", roots.root1);
    } else {
        printf("Complex roots (not handled in this version).\n");
    }

    return 0;
}

Roots solve_quadratic(float a, float b, float c) {
    Roots result;
    float discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        result.num_roots = 2;
        result.root1 = (-b + sqrt(discriminant)) / (2 * a);
        result.root2 = (-b - sqrt(discriminant)) / (2 * a);
    } else if (discriminant == 0) {
        result.num_roots = 1;
        result.root1 = -b / (2 * a);
        result.root2 = 0;
    } else {
        result.num_roots = 0; // Complex roots not handled
        result.root1 = result.root2 = 0;
    }

    return result;
}

