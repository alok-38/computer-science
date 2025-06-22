#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    char op = 0;
    float a = 0, b = 0;

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a + b | a - b | a * b | a / b" << endl;

    cout << "Enter the operation: ";
    getline(cin, input);

    // Find operator in the input string
    size_t pos = input.find_first_of("+-*/");
    if (pos == string::npos) {
        cout << "No valid operator found. Please use +, -, *, or /." << endl;
        return 1;
    }
    op = input[pos];

    // Check that input is exactly "a op b" with spaces
    // We expect input like: "a + b"
    // So length should be 5, and positions:
    // input[0] == 'a', input[1] == ' ', input[2] == operator, input[3] == ' ', input[4] == 'b'

    if (input.length() != 5 || input[0] != 'a' || input[1] != ' ' || input[3] != ' ' || input[4] != 'b') {
        cout << "Invalid format. Please enter exactly: a + b | a - b | a * b | a / b" << endl;
        return 1;
    }

    // Now ask for values of a and b
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    switch(op) {
        case '+':
            cout << a << " + " << b << " = " << a + b << endl;
            break;
        case '-':
            cout << a << " - " << b << " = " << a - b << endl;
            break;
        case '*':
            cout << a << " * " << b << " = " << a * b << endl;
            break;
        case '/':
            if (b == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                cout << a << " / " << b << " = " << a / b << endl;
            }
            break;
        default:
            cout << "Unknown operator." << endl;
    }

    return 0;
}

