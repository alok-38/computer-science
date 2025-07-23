#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "How old are you?";
    cin >> age;

    if (age == 25) {
        cout << "Make the best use of your twenties" << endl;
    } else {
        cout << "Face existential crisis" << endl;
    }
}
