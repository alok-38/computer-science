#include <stdio.h>

int main() {
    int numberOfEggs;
    double avgWeightPerEgg;  // in grams
    double totalWeight;

    // Input number of eggs
    printf("Enter the number of eggs: ");
    scanf("%d", &numberOfEggs);

    // Input average weight per egg
    printf("Enter the average weight per egg (in grams): ");
    scanf("%lf", &avgWeightPerEgg);

    // Calculate total weight
    totalWeight = numberOfEggs * avgWeightPerEgg;

    // Display the result
    printf("Total weight of %d eggs is %.2f grams.\n", numberOfEggs, totalWeight);

    return 0;
}
 
