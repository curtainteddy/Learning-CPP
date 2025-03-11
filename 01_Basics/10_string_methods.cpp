#include <iostream>

int main()
{
    // std::string name;
    // std::cout << "Enter your name: ";
    // std::cin >> name;
    // std::cout << "Length of name: " << name.length() << std::endl;
    // This will only take the first word of the input and leave the rest in the input buffer

    std::string fullname;
    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullname);
    std::cout << "Length of name: " << fullname.length() << std::endl;

    bool is_empty = fullname.empty();
    std::cout << "Is the name empty? " << is_empty << std::endl;

    fullname.clear();
    std::cout << "Is the name empty after clearing? " << fullname.empty() << std::endl;

    fullname = "John Doe";
    fullname.append(" Jr.");
    std::cout << "Full name after appending: " << fullname << std::endl;

    fullname.insert(4, " Wick");
    std::cout << "Full name after inserting: " << fullname << std::endl;

    fullname.find("Wick");
    std::cout << "Index of Wick: " << fullname.find("Wick") << std::endl;

    fullname.erase(2, 2);
    std::cout << "Full name after erasing: " << fullname << std::endl;

    return 0;
}