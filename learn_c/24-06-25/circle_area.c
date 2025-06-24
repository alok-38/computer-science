#include <stdio.h>
#include <string.h>
#define PI 3.14159  // More accurate

int main()
{
    char inputType[20];
    float radius = 0.0;

    printf("Will you enter the 'radius', 'diameter', or 'circumference'? ");
    scanf("%s", inputType);

    if (strcmp(inputType, "radius") == 0) {
        printf("Enter the radius: ");
        scanf("%f", &radius);
    } else if (strcmp(inputType, "diameter") == 0) {
        float diameter;
        printf("Enter the diameter: ");
        scanf("%f", &diameter);
        radius = diameter / 2.0;
    } else if (strcmp(inputType, "circumference") == 0) {
        float circumference;
        printf("Enter the circumference: ");
        scanf("%f", &circumference);
        radius = circumference / (2.0 * PI);
    } else {
        printf("Invalid input type. Please enter 'radius', 'diameter', or 'circumference'.\n");
        return 1;
    }

    if (radius < 0) {
        printf("Radius cannot be negative.\n");
        return 1;
    }

    float area = PI * radius * radius;
    float circumference = 2 * PI * radius;

    printf("Computed radius = %.2f\n", radius);
    printf("Circle area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}

