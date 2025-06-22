#include <stdio.h>

int main()
{
    int i, j;
    int next_multiple;
    int count = 0;

    while (1)
    {
        printf("Enter the values of i and j (space-separated): ");
        scanf("%d %d", &i, &j);

        if (j == 0)
        {
            printf("Error: j cannot be zero.\n");
            continue;
        }

        next_multiple = i + j - i % j;
        printf("Next multiple = %d\n", next_multiple);

        count++;
        if (count == 5)
        {
            break;
        }
    }

    return 0;
}
