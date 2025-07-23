#include <iostream>
using namespace std;

int main() {
    int int_variable;
    float float_variable;
    char char_variable;
    bool bool_variable;
    string string_variable;

    int_variable = 45;
    float_variable = 45.75;
    char_variable = 'A';
    bool_variable = true;
    string_variable = "Alok";

    // Ternary example
    string result = (int_variable > 50) ? "Greater than 50" : "50 or less";
    // Ternary example 2: Beer eligibility
    int age = 40;
    string beer_status = (age >= 21) 
        ? string_variable + ", you can drink beer 🍺" 
        : string_variable + ", no beer for you 🚫";
    cout << beer_status << endl;

} 
