#include <iostream>

int main()
{

    int age;
    std::string name;
    std::string address;

    std::cout << "Enter your name: ";
    // std::cin >> name; // Only takes first word of input and next word is stored in next input
    std::getline(std::cin, name); // To take the whole line as input

    std::cout << "Enter your age: ";
    std::cin >> age; // This leaves a newline character in the input buffer

    std::cout << "Enter your address: ";
    std::getline(std::cin >> std::ws, address); // To eliminate the newline character from the input buffer we use std::ws

    std::cout << "Hello " << name << "!" << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;
    std::cout << "You live at " << address << std::endl;

    return 0;
}
