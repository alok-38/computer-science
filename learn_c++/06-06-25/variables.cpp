#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age = 0;
    double weight = 0.0;
    bool lifelong_student = true;

    cout << "Name: ";
    cin >> name;

    cout << "How old are you? ";
    cin >> age;

    cout << "How much do you weigh? ";
    cin >> weight;

    if (lifelong_student) {
        cout << boolalpha;  // Enables printing "true"/"false" instead of 1/0
        cout << name << ", a " << lifelong_student << " lifelong student, is " 
             << age << " and weighs " << weight << " kilos." << endl;
    }

    return 0;
}

