#include "constants.h"
#include <stdio.h>

int main() {
    // Open (or create) data.txt for writing
    FILE *file = fopen("data.txt", "w");
    if (!file) {
        perror("Failed to open file");
        return 1;
    }

    // Print to console
    printf("Speed of light: %.8e m/s\n", LIGHT_SPEED);

    // Write info to file
    fprintf(file, "File created and data written.\n");
    fprintf(file, "Speed of light: %.8e m/s\n", LIGHT_SPEED);

    // Close file to save changes
    fclose(file);

    printf("Data saved to data.txt\n");

    return 0;
}

