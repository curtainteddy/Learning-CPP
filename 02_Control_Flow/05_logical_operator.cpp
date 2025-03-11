#include <iostream>

int main()
{
    // && : Logical AND
    // || : Logical OR
    // ! : Logical NOT

    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if (temp > 0 && temp < 30) // AND operator checks if both conditions are true
    {
        std::cout << "Feels good, doesn't it?" << std::endl;
    }
    else
    {
        std::cout << "We sure it's a good idea to go outside?" << std::endl;
    }

    bool isRaining;
    bool isSunny;

    std::cout << "Is it raining? (1/0): ";
    std::cin >> isRaining;

    std::cout << "Is it sunny? (1/0): ";
    std::cin >> isSunny;

    if (isSunny || !isRaining) // OR operator checks if either of the conditions are true, has higher precedence than NOT operator
    {
        std::cout << "Let's touch some grass today." << std::endl;
    }
    else
    {
        std::cout << "Let's lock in and stay inside." << std::endl;
    }

    int isGuilty;

    std::cout << "Did ya do something sketchy? (1/0): ";
    std::cin >> isGuilty;

    if (!isGuilty) // NOT operator checks if the value is false
    {
        std::cout << "We rocking out of jail." << std::endl;
    }
    else
    {
        std::cout << "We're in a bit of a pickle." << std::endl;
    }
    return 0;
}