#include <stdio.h>

int main()
{
    printf("Where do you want to start from: ");
    int start;
    scanf("%i", &start);

    while (start >= 0)
    {
        printf("%i\n", start);
        start--;
    }
}

