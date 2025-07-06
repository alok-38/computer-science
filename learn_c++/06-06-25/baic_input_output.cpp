#include <iostream>
#include <limits> // for std::numeric_limits

int main()
{
    while (true)
    {
        std::cout << "Enter a number (or 'q' to quit): ";
        int x;

        if (std::cin >> x)
        {
            std::cout << "You entered " << x << '\n';
        }
        else
        {
            std::cin.clear(); // clear error flags
            std::string input;
            std::cin >> input;

            if (input == "q" || input == "Q")
            {
                std::cout << "Quitting program.\n";
                break;
            }
            else
            {
                std::cout << "Invalid input. Please enter a valid number or 'q' to quit.\n";
            }
        }

        // Discard any remaining input in the buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return 0;
}
