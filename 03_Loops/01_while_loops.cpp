#include <iostream>

int main()
{
    std::string name;
    std::string password;

    // We use while loops mostly when number of iterations are not known in advance.
    while (name.empty() || password.empty())
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);

        std::cout << "Enter your password: ";
        std::getline(std::cin, password);
    }

    std::cout << "Thank you, " << name << ". You are now signed in." << std::endl;
    return 0;
}