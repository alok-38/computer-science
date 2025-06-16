#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // for formatting
using namespace std;

struct Account
{
    string accountNumber;
    string pin;
    double balance;
    vector<string> transactionHistory;

    void checkBalance() const
    {
        cout << fixed << setprecision(2);
        cout << "Current balance: $" << balance << endl;
    }

    void printTransactionHistory() const
    {
        cout << "\n--- Transaction History ---" << endl;
        if (transactionHistory.empty())
        {
            cout << "No transactions yet." << endl;
        }
        else
        {
            for (const auto &t : transactionHistory)
                cout << t << endl;
        }
        cout << "----------------------------\n"
             << endl;
    }

    void printSummary() const
    {
        double totalDeposits = 0.0, totalWithdrawals = 0.0;
        for (const auto &t : transactionHistory)
        {
            if (t.find("Deposit") == 0)
            {
                // Extract amount from string like "Deposit: $100.00"
                size_t pos = t.find("$");
                if (pos != string::npos)
                    totalDeposits += stod(t.substr(pos + 1));
            }
            else if (t.find("Withdrawal") == 0)
            {
                size_t pos = t.find("$");
                if (pos != string::npos)
                    totalWithdrawals += stod(t.substr(pos + 1));
            }
        }

        cout << fixed << setprecision(2);
        cout << "\n--- Account Summary ---" << endl;
        cout << "Total Deposited: $" << totalDeposits << endl;
        cout << "Total Withdrawn: $" << totalWithdrawals << endl;
        cout << "Current Balance: $" << balance << endl;
        cout << "------------------------\n"
             << endl;
    }
};

void withdrawMoney(Account &acc)
{
    double amount;
    cout << "Enter amount to withdraw: $";
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Invalid amount. Please enter a value greater than 0." << endl;
    }
    else if (amount > acc.balance)
    {
        cout << "Insufficient balance. You have $" << acc.balance << " available." << endl;
    }
    else
    {
        acc.balance -= amount;
        cout << "Withdrawal successful. New balance: $" << acc.balance << endl;
        acc.transactionHistory.push_back("Withdrawal: $" + to_string(amount));
    }
}

void depositMoney(Account &acc)
{
    double amount;
    cout << "Enter amount to deposit: $";
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Invalid amount. Please enter a value greater than 0." << endl;
    }
    else
    {
        acc.balance += amount;
        cout << "Deposit successful. New balance: $" << acc.balance << endl;
        acc.transactionHistory.push_back("Deposit: $" + to_string(amount));
    }
}

int main()
{
    vector<Account> accounts = {
        {"1001", "1111", 1200.50},
        {"1002", "2222", 2450.00},
        {"1003", "3333", 300.75}};

    string enteredAccount, enteredPin;
    cout << "Enter Account Number: ";
    cin >> enteredAccount;
    cout << "Enter PIN: ";
    cin >> enteredPin;

    bool authenticated = false;
    for (auto &acc : accounts)
    {
        if (acc.accountNumber == enteredAccount && acc.pin == enteredPin)
        {
            cout << "Authentication Successful!" << endl;

            int choice;
            do
            {
                cout << "\n--- MENU ---\n";
                cout << "1. Check Balance\n";
                cout << "2. Withdraw\n";
                cout << "3. Deposit\n";
                cout << "4. Transaction History\n";
                cout << "5. Account Summary\n";
                cout << "6. Exit\n";
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice)
                {
                case 1:
                    acc.checkBalance();
                    break;
                case 2:
                    withdrawMoney(acc);
                    break;
                case 3:
                    depositMoney(acc);
                    break;
                case 4:
                    acc.printTransactionHistory();
                    break;
                case 5:
                    acc.printSummary();
                    break;
                case 6:
                    cout << "Thank you for using the ATM.\n";
                    break;
                default:
                    cout << "Invalid choice. Try again.\n";
                }

            } while (choice != 6);

            authenticated = true;
            break;
        }
    }

    if (!authenticated)
    {
        cout << "Authentication Failed. Invalid account number or PIN." << endl;
    }

    return 0;
}
