#include <iostream>

int main()
{
    int month;
    std::cout << "Enter a month number: ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "January" << std::endl;
        break;
    case 2:
        std::cout << "February" << std::endl;
        break;
    case 3:
        std::cout << "March" << std::endl;
        break;
    case 4:
        std::cout << "April" << std::endl;
        break;
    case 5:
        std::cout << "May" << std::endl;
        break;
    case 6:
        std::cout << "June" << std::endl;
        break;
    case 7:
        std::cout << "July" << std::endl;
        break;
    case 8:
        std::cout << "August" << std::endl;
        break;
    case 9:
        std::cout << "September" << std::endl;
        break;
    default:
        std::cout << "Please enter 1-9, I didn't bother to add after september." << std::endl;
        break;
    }

    return 0;
}