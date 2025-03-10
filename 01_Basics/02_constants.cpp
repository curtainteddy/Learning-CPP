#include <iostream>

int main()
{
    double pi = 3.14159; // Static values should be stored in constants
    pi = 999999999;      // This changed the value of pi. This is not good practice

    // Rather we will store it in a contant
    const double PI = 3.14159; // Using capital letter to follow proper naming convention

    // PI = 999999999;            // This will throw an error
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << "Circumference of a circle with radius " << radius << " is " << circumference << std::endl;

    const int DAYS_IN_A_WEEK = 7;
    const int MONTHS_IN_A_YEAR = 12;
    const int SPEED_OF_LIGHT = 299792458; // In m/s

    std::cout << "There are " << DAYS_IN_A_WEEK << " days in a week." << std::endl;
    std::cout << "There are " << MONTHS_IN_A_YEAR << " months in a year." << std::endl;
    std::cout << "The speed of light is " << SPEED_OF_LIGHT << " m/s." << std::endl;
    return 0;
}