#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int playerHealth = 100;
    int playerAmmo = 10;
    int enemyHealth = 50;
    char action;

    cout << "Welcome to Half-Life 2 Mini Text Adventure!\n";

    while (playerHealth > 0 && enemyHealth > 0) {
        cout << "\nYour Health: " << playerHealth << ", Ammo: " << playerAmmo << endl;
        cout << "Enemy Health: " << enemyHealth << endl;

        cout << "Choose action: (s)hoot, (r)eload, (h)eal, (q)uit: ";
        cin >> action;

        if (action == 's') {
            if (playerAmmo <= 0) {
                cout << "Out of ammo! Reload first.\n";
            } else {
                // Shoot enemy
                int damage = rand() % 15 + 5; // Random damage between 5-19
                enemyHealth -= damage;
                playerAmmo--;
                cout << "You shoot the enemy for " << damage << " damage.\n";
            }
        } 
        else if (action == 'r') {
            playerAmmo = 10;
            cout << "Reloaded ammo to 10.\n";
        } 
        else if (action == 'h') {
            if (playerHealth >= 100) {
                cout << "Health is already full.\n";
            } else {
                int healAmount = rand() % 20 + 10; // Heal 10-29 health
                playerHealth += healAmount;
                if (playerHealth > 100) playerHealth = 100;
                cout << "You heal yourself for " << healAmount << " health.\n";
            }
        } 
        else if (action == 'q') {
            cout << "Quitting game...\n";
            break;
        } 
        else {
            cout << "Invalid action. Try again.\n";
            continue;
        }

        // Enemy attacks back if still alive
        if (enemyHealth > 0) {
            int enemyDamage = rand() % 15 + 5;
            playerHealth -= enemyDamage;
            cout << "Enemy attacks you for " << enemyDamage << " damage.\n";
        }
    }

    if (playerHealth <= 0) {
        cout << "\nYou died! Game over.\n";
    } else if (enemyHealth <= 0) {
        cout << "\nEnemy defeated! You win!\n";
    }

    return 0;
}

