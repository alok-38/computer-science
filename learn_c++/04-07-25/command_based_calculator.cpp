#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cmath>

using namespace std;

// Helper to remove all spaces from a string
string removeSpaces(const string &str)
{
    string result;
    for (char c : str)
    {
        if (!isspace(c))
            result += c;
    }
    return result;
}

int main()
{
    double accumulator = 0;
    string line, input;
    string command;
    string numberStr;
    double number;

    cout << "Enter commands:\n"
         << "  S <num>  - Start with number\n"
         << "  A <num>  - Add\n"
         << "  SU <num> - Subtract\n"
         << "  M <num>  - Multiply\n"
         << "  D <num>  - Divide\n"
         << "  P <num>  - Power (raise accumulator to <num>)\n"
         << "  E        - End and show final result\n"
         << endl;

    while (true)
    {
        getline(cin, line);

        if (line.empty())
            continue;

        // Remove all spaces so we support both "S 10" and "S10"
        input = removeSpaces(line);

        // Convert input to uppercase
        transform(input.begin(), input.end(), input.begin(), ::toupper);

        if (input == "E")
            break;

        // Find where the number starts
        size_t pos = 0;
        while (pos < input.size() && isalpha(input[pos]))
            pos++;

        command = input.substr(0, pos);
        numberStr = input.substr(pos);

        if (command.empty() || numberStr.empty())
        {
            cout << "Invalid input format. Please enter like 'S10' or 'SU-5'." << endl;
            continue;
        }

        try
        {
            number = stod(numberStr);
        }
        catch (...)
        {
            cout << "Invalid number: " << numberStr << endl;
            continue;
        }

        if (command == "S")
        {
            accumulator = number;
            cout << accumulator << endl;
        }
        else if (command == "A")
        {
            accumulator += number;
            cout << accumulator << endl;
        }
        else if (command == "SU")
        {
            accumulator -= number;
            cout << accumulator << endl;
        }
        else if (command == "M")
        {
            accumulator *= number;
            cout << accumulator << endl;
        }
        else if (command == "D")
        {
            if (number == 0)
            {
                cout << "Error: Division by zero!" << endl;
                continue;
            }
            accumulator /= number;
            cout << accumulator << endl;
        }
        else if (command == "P")
        {
            accumulator = pow(accumulator, number);
            cout << accumulator << endl;
        }
        else
        {
            cout << "Invalid command: " << command << endl;
            continue;
        }
    }

    cout << "Final result: " << accumulator << endl;

    return 0;
}
