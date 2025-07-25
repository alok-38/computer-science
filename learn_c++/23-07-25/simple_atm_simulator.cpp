#include <iostream>
using namespace std;

int main()
{
    float balance = 0.0f, deposite = 0.0f, withdraw = 0.0f;
    int choice;
    char exitChoice;

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
            cout << "Enter deposit amount: ";
            cin >> deposite;
            if (deposite > 0)
            {
                balance += deposite;
                cout << "Deposited: " << deposite << endl;
            }
            else
            {
                cout << "Invalid deposit amount!" << endl;
            }
            break;

        case 3:
            cout << "How much you want to withdraw: ";
            cin >> withdraw;
            if (withdraw > balance)
            {
                cout << "Insufficient balance! Withdrawal cancelled." << endl;
            }
            else if (withdraw <= 0)
            {
                cout << "Invalid withdrawal amount!" << endl;
            }
            else
            {
                balance -= withdraw;
                cout << "Withdrawn: " << withdraw << endl;
            }
            break;

        case 0:
            cout << "Are you sure you want to exit? Y/y or N/n: ";
            cin >> exitChoice;

            if (exitChoice == 'Y' || exitChoice == 'y')
            {
                cout << "Thank you for banking with us... Goodbye!\n";
                exit(0);
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

    return 0;
}
