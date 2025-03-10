#include <iostream>

int main()
{
    // This is a comment

    std::cout << "Rip Bozo!" << std::endl; // Using end line character
    std::cout << "Sigma Boy!" << '\n';     // Using new line character
    std::cout << "Alpha Chad!" << std::endl;

    /*
    This is a multi-line comment.
    This line is commented as well.
    */

    int x; // Declaration
    x = 5; // Assignment

    int y = 5; // Declaring and assigning at the same time

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    /* Data Types */
    int age = 20;         // For whole numbers
    float height = 5.9;   // For floating points
    double weight = 70.5; // Double is more precise than float

    std::cout << age << std::endl;
    std::cout << height << std::endl;
    std::cout << weight << std::endl;

    int days = 5.5;
    std::cout << days << std::endl; // Output will be 5 since int will truncate the decimal

    std::cout << "My height is " << height << " and weight is " << weight << " at the age of " << age << "." << std::endl; // Concatenation
    std::cout << age + height << std::endl;                                                                                // Output will be 25.9

    // Chars

    char grade = 'A';    // Single quotes for char
    char initials = 'P'; // Can only store single character
    char currency = '$'; // Can store special characters

    std::cout << grade << std::endl;
    std::cout << initials << std::endl;

    // Booleans
    bool isMale = true;
    bool isTall = false;

    std::cout << isMale << std::endl; // Output will be 1 for true and 0 for false
    std::cout << isTall << std::endl;

    // Strings
    std::string name = "Peshal"; // String is a class in C++, provided from std namespace
    std::cout << name << std::endl;

    std::string day = "Monday";
    std::cout << day << std::endl;

    std::string food = "Pizza";
    std::cout << food << std::endl;

    std::cout << "Hello, I am " << name << ". I ate " << food << " on " << day << "." << std::endl;
    return 0;
}