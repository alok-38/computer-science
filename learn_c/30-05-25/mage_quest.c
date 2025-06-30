#include <stdio.h>

// Global mana variable to keep track across functions
int mana;

// Function to attempt casting a spell
int cast_spell(const char *spell_name, int cost)
{
    if (mana >= cost)
    {
        mana -= cost;
        printf("%s cast successfully! Remaining mana: %d\n", spell_name, mana);
        return 1; // Spell cast successfully
    }
    else
    {
        printf("Not enough mana to cast %s. You need %d more mana.\n", spell_name, cost - mana);
        return 0; // Failed to cast
    }
}

int main()
{
    printf("Enter the number of Mana points to begin with: ");
    scanf("%d", &mana);

    // Example spell casting
    cast_spell("Fireball", 25);
    cast_spell("Ice Shard", 15);
    cast_spell("Heal", 20);
    cast_spell("Fireball", 25); // Might fail depending on remaining mana

    return 0;
}
