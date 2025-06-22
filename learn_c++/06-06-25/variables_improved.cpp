#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age = 0;
    double weight = 0.0;
    bool lifelong_student;

    cout << "Name: ";
    getline(cin, name);

    cout << "How old are you? ";
    cin >> age;

    cout << "How much do you weigh? ";
    cin >> weight;

    cout << "Are you a student for life? (1 = yes, 0 = no): ";
    cin >> lifelong_student;

     if (lifelong_student) {
        cout << boolalpha;  // Enables printing "true"/"false" instead of 1/0
        cout << name << ", a " << lifelong_student << " lifelong student, is " 
             << age << " and weighs " << weight << "." << endl;
    } else {
        cout << "Well...You better be one." << endl;
    }

     return 0;
}

