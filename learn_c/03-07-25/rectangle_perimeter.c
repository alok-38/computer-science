#include <stdio.h>

int main()
{
    int length, width;
    printf("Enter the rectangle's length: ");
    scanf("%i", &length);
    printf("Enter the rectangle's width: ");
    scanf("%i", &width);
    int perimeter = 2 * (length + width);
    printf("Rectangle's perimeter = %i\n", perimeter);
}
