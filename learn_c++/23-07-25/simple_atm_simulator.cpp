#include <iostream>
using namespace std;

int main()
{
    float balance, deposite, withdraw;
    int choice;
    char exitChoice;

    balance = 0;

    while (true)
    {
        cout << "\n=== Old Bank ===\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Balance: " << balance << endl;
            break;
        case 2:
            cout << "Deposite: " << deposite << endl;
            break;
        case 3:
            cout << "Withdraw: " << withdraw << endl;
            break;
        case 0:
            cout << "Are you sure you want to exit? Y/y or N/n: ";
            cin >> exitChoice;

            if (exitChoice == 'Y' || exitChoice == 'y')
            {
                cout << "Exiting... Goodbye!\n";
                exit(0); // or break out of the loop
            }
            else if (exitChoice == 'N' || exitChoice == 'n')
            {
                continue; // Go back to menu
            }
            else
            {
                cout << "Invalid input. Returning to menu." << endl;
                continue;
            }
            break;

        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }
}
