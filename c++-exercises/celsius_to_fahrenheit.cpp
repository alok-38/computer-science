#include <iostream>
using namespace std;

int main()
{
    cout << "Converts temperature between Celsius and Fahrenheit." << endl;
    cout << "---------------------------------------------------" << endl;

    double temperature, converted;
    char unit;

    cout << "Enter temperature: ";
    cin >> temperature;

    cout << "Is this in Celsius (C) or Fahrenheit (F)? ";
    cin >> unit;

    if (unit == 'C' || unit == 'c')
    {
        converted = (temperature * 9.0 / 5.0) + 32;
        cout << "Temperature in Fahrenheit = " << converted << "°F" << endl;
    }
    else if (unit == 'F' || unit == 'f')
    {
        converted = (temperature - 32) * 5.0 / 9.0;
        cout << "Temperature in Celsius = " << converted << "°C" << endl;
    }
    else
    {
        cout << "Invalid unit entered. Please enter 'C' or 'F'." << endl;
    }

    return 0;
}
