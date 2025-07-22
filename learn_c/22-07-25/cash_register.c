#include <stdio.h>

struct Denomination
{
    const char *name;
    int value; // in cents
};

struct Denomination denominations[] = {
    {"$100", 10000},
    {"$50", 5000},
    {"$20", 2000},
    {"$10", 1000},
    {"$5", 500},
    {"$1", 100},
    {"25¢", 25},
    {"10¢", 10},
    {"5¢", 5},
    {"1¢", 1}};

int convertDollarsToCents(float dollars);
void calculate_change(int changeInCents);

int main(void)
{
    float cost, paid;

    // Prompt and read cost
    printf("Cost = ");
    scanf("%f", &cost);

    // Prompt and read payment
    printf("Paid = ");
    scanf("%f", &paid);

    if (paid < cost)
    {
        printf("Insufficient payment.\n");
        return 1;
    }

    // Calculate and print change
    float change = paid - cost;
    printf("Change: $%.2f\n", change);

    // Convert to cents and break down
    int changeInCents = convertDollarsToCents(change);
    calculate_change(changeInCents);

    return 0;
}

int convertDollarsToCents(float dollars)
{
    return (int)(dollars * 100 + 0.5); // round to nearest cent
}

void calculate_change(int changeInCents)
{
    int n = sizeof(denominations) / sizeof(denominations[0]);

    for (int i = 0; i < n; i++)
    {
        int count = changeInCents / denominations[i].value;
        if (count > 0)
        {
            printf("%s x %d\n", denominations[i].name, count);
            changeInCents -= count * denominations[i].value;
        }
    }
}
