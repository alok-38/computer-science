#include <iostream>
using namespace std;

int main()
{
    float weight, height;

    cout << "Weight (in kilograms): ";
    cin >> weight;

    cout << "Height (in meters): ";
    cin >> height;

    // Check for valid input to avoid division by zero
    if (height <= 0) {
        cout << "Height must be greater than zero." << endl;
        return 1; // Exit with error
    }

    float BMI = weight / (height * height);

    cout << "Your BMI is: " << BMI << endl;

    if (BMI < 18.5) {
        cout << "Category: Underweight" << endl;
    } else if (BMI < 24.9) {
        cout << "Category: Normal weight" << endl;
    } else if (BMI < 29.9) {
        cout << "Category: Overweight" << endl;
    } else {
        cout << "Category: Obese" << endl;
    }

    return 0;
}

