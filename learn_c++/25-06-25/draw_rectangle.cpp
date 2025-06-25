#include <iostream>
using namespace std;

int main()
{
    int width = 10;
    int height = 5;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

