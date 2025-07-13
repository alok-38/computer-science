#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    char input[100];
    int max_val = 0;
    int min_val = 0;
    int numnbers;
    bool first_number = true;

    while (true)
    {
        printf("Keep entering numbers (positive and/or negative) line by line\n");
        if ((scanf("%d", &numnbers) != 1) && (numnbers == "done"))
        {
            // If input is not a valid number, break or clear input buffer
            printf("Invalid input. Exiting.\n");
            break;
        }
    }
}
