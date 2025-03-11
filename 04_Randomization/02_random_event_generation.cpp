#include <iostream>

int main()
{

    srand(time(0)); // Returns the current time as the number of seconds since January 1, 1970 (Unix Epoch).

    int num = rand() % 5 + 1; // Generate a random number between 1 and 5.

    switch (num)
    {
    case 1:
        std::cout << "You got the Plague!" << '\n';
        break;
    case 2:
        std::cout << "You got Malaria!" << '\n';
        break;
    case 3:
        std::cout << "You got Cholera!" << '\n';
        break;
    case 4:
        std::cout << "You got Tuberculosis!" << '\n';
        break;
    case 5:
        std::cout << "You got Ebola!" << '\n';
        break;
    default:
        std::cout << "You got nothing... for now!" << '\n';
        break;
    }

    return 0;
}