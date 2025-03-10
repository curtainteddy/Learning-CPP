#include <iostream>

int main()
{
    // Ternary operators are replacement to if-else statements for simple conditions
    // Syntax: condition ? value_if_true : value_if_false

    int age;

    std::cout << "Let's find if you can drink." << std::endl;
    std::cout << "Enter your age: ";
    std::cin >> age;

    age >= 21 ? std::cout << "Ready for a scotch on the rocks." << std::endl : std::cout << "I'd pass on that if i were you." << std::endl;

    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    number % 2 ? std::cout << "Odd" << std::endl : std::cout << "Even" << std::endl;

    bool isZesty;
    std::cout << "Do you like pineapple on pizza?" << std::endl;
    std::cout << "YES : 1" << std::endl;
    std::cout << "NO : 0" << std::endl;
    std::cin >> isZesty;

    std::cout << (isZesty ? "You're kinda fruity." : "Good choice."); // Can also be written like this.
    return 0;
}