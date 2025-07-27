#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // pointer to int, initially NULL
    char **people = NULL;
    // current size
    int size = 0;

    // Let's allocate space for 5 integers
    size = 5;
    people = malloc(size * sizeof(int));

    if (people == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Use the array like people[0], people[1], ..., people[4]
    people[0] = "Alok";
    people[1] = "Azhar";
    people[2] = "Shreyas";
    people[3] = "Karthik";
    people[4] = "Manoj";
    people[5] = "Muttu";

    // output
    for (int i = 0; i < size; i++) {
        printf("%s\n", people[i]);
    }

     // Free the array of pointers (not the strings themselves here because they are literals)
     free(people);

     return 0;
}

