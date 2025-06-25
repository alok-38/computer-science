#include <iostream>
using namespace std;

int main() {
    int height;

    cout << "Enter the height of the triangle: ";
    cin >> height;

    for (int i = 1; i <= height; i++)
    {
        // Print spaces first for right alignment
        for (int j = 0; j < height - i; j++)
        {
            cout << " ";
        }
        // Print hashes (#) to form the step
        for (int k = 0; k < i; k++)
        {
            cout << "#";
        }
        cout << endl;
    }
}

