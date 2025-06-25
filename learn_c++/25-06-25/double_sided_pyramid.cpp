#include <iostream>
using namespace std;

int main() {
    int height;

    cout << "Enter the height of the pyramid: ";
    cin >> height;

    for (int i = 1; i <= height; i++)
    {
        // Left spaces for alignment
        for (int j = 0; j < height - i; j++)
        {
            cout << " ";
        }
        // Left side hashes
        for (int k = 0; k < i; k++)
        {
            cout << "#";
        }
        // Middle gap (optional: 2 spaces)
        cout << "  ";
        // Right side hashes (same as left)
        for (int k = 0; k < i; k++)
        {
            cout << "#";
        }
        cout << endl;
    }
}

