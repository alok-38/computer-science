#define c 2.99792458e8
#define sec 1.0

#include <stdio.h>

int main(void) {
    double distance_in_meteres = c * sec;
    double distance_in_km = distance_in_meteres / 1000.0;

    printf("Light travels %.3f km in %.f second.\n", distance_in_km, sec);

    return 0;
}

