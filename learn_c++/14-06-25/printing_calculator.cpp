#include <iostream>
#include <string>
#include <cctype>
#include <limits>

using namespace std;

int main()
{
    double current = 0.0;
    string command;
    double value;

    cout << "Printing Calculator\n";
    cout << "Commands:\n";
    cout << " P - Display current value\n";
    cout << " R - Reset current value to 0\n";
    cout << " S <value> - Set current value\n";
    cout << " A <value> - Add to current value\n";
    cout << " M <value> - Multiply current value\n";
    cout << " D <value> - Divide current value\n";
    cout << " X - Exit\n";

    while (true)
    {
        cout << "\nEnter command: ";
        if (!(cin >> command)) {
            cout << "Input error. Exiting.\n";
            break;
        }

        command[0] = toupper(command[0]);

        if (command == "P")
        {
            cout << "Current value: " << current << endl;
        }
        else if (command == "R")
        {
            current = 0;
            cout << "Reset current value to 0." << endl;
        }
        else if (command == "X")
        {
            cout << "Exiting.\n";
            break;
        }
        else
        {
            if (!(cin >> value)) {
                cout << "Invalid number input. Try again.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            if (command == "S")
                current = value;
            else if (command == "A")
                current += value;
            else if (command == "M")
                current *= value;
            else if (command == "D")
            {
                if (value != 0)
                    current /= value;
                else
                {
                    cout << "Error: Division by zero." << endl;
                    current = 0;
                    cout << "Current value reset to 0 due to division by zero." << endl;
                    continue;
                }
            }
            else
            {
                cout << "Unknown command.\n";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            cout << "Result: " << current << endl;
        }
    }

    return 0;
}

