#include <iostream>
using namespace std;

int main()
{
    string phrase = "Giraffe Academy";
    cout << phrase.length() << endl;
    cout << "First letter: " << phrase[0] << endl;
    cout << "Substring (0-6): " << phrase.substr(0, 7) << endl;

    cout << "After replacing: " << phrase.replace(8, 4, "School") << endl;

}

