#include <stdio.h>

int main()
{
    int floor;
    char choice;

    do
    {
        char direction;
        printf("Convert from (U)S to EU or (E)U to US? Enter U or E: ");
        scanf(" %c", &direction);

        if (direction == 'U' || direction == 'u')
        {
            printf("Enter US floor: ");
            scanf("%d", &floor);
            if (floor <= 0)
            {
                printf("Invalid US floor number (must be positive).\n");
            }
            else
            {
                printf("Equivalent EU floor: %d\n", floor - 1);
            }
        }
        else if (direction == 'E' || direction == 'e')
        {
            printf("Enter EU floor: ");
            scanf("%d", &floor);
            printf("Equivalent US floor: %d\n", floor + 1);
        }
        else
        {
            printf("Invalid choice. Please enter 'U' or 'E'.\n");
        }

        printf("Do you want to convert another floor? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Thank you for using our elevator service!\n");
    return 0;
}
