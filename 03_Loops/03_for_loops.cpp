#include <iostream>

int main()
{
    std::string name;
    std::string password;

    // We use for loops mostly when number of iterations are not known in advance but we want to execute the loop at least once.

    for (int i = 1; i <= 5; i++)
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);

        std::cout << "Enter your password: ";
        std::getline(std::cin, password);

        if (!name.empty() && !password.empty())
        {
            std::cout << "Thank you, " << name << ". You are now signed in." << std::endl;
            break;
        }
        else
        {
            std::cout << "You have " << 5 - i << " attempts remaining." << std::endl;
        }
    }

    return 0;
}