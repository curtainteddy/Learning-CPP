#include <iostream>

int main()
{
    int age;

    std::cout << "Let's find if you can drink." << std::endl;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 100) // If the condition is true, the code block will execute
    {
        std::cout << "Granpa, it's bedtime." << std::endl;
    }
    else if (age >= 21)
    {
        std::cout << "Ready for a scotch on the rocks." << std::endl;
    }
    else if (age <= 0)
    {
        std::cout << "First we gotta have a birth." << std::endl;
    }
    else // If the condition is false, the code block will execute
    {
        std::cout << "I'd pass on that if i were you." << std::endl;
    }

    return 0;
}