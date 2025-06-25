#include <iostream>
#include <iomanip>
#include <cmath> // for pow()
using namespace std;

int main() {
    const double DEFAULT_RATE = 0.075; // Default interest rate 7.5%
    double principal, rate;
    int time;
    int choice;

    cout << fixed << setprecision(2);

    do {
        // Display menu
        cout << "\n--- Financial Calculator Menu ---\n";
        cout << "1. Simple Interest\n";
        cout << "2. Compound Interest\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "\n--- Simple Interest ---\n";
                cout << "Enter principal amount: ₹";
                cin >> principal;
                cout << "Enter annual interest rate (%) [e.g. 7.5]: ";
                cin >> rate;
                cout << "Enter time (years): ";
                cin >> time;

                rate = rate / 100; // convert percentage to decimal

                double interest = principal * rate * time;
                double total = principal + interest;

                cout << "Simple Interest = ₹" << interest << endl;
                cout << "Total amount = ₹" << total << endl;
                break;
            }
            case 2: {
                cout << "\n--- Compound Interest ---\n";
                cout << "Enter principal amount: ₹";
                cin >> principal;
                cout << "Enter annual interest rate (%) [e.g. 7.5]: ";
                cin >> rate;
                cout << "Enter time (years): ";
                cin >> time;
                int n; // number of times interest applied per year
                cout << "Enter number of times interest compounded per year (e.g., 1 for yearly, 4 for quarterly): ";
                cin >> n;

                rate = rate / 100; // convert percentage to decimal

                // Compound interest formula: A = P * (1 + r/n)^(nt)
                double amount = principal * pow((1 + rate / n), n * time);
                double interest = amount - principal;

                cout << "Compound Interest = ₹" << interest << endl;
                cout << "Total amount = ₹" << amount << endl;
                break;
            }
            case 3:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please select 1, 2, or 3." << endl;
        }
    } while (choice != 3);

    return 0;
}

