#include <iostream>
#include <cmath>

double calculateArea(double lengthforArea);
double calculateVolume(double lengthforVolume);

int main()
{
    std::cout << "Enter the length of the room: ";
    int length;
    std::cin >> length;

    double area = calculateArea(length); // Can store the return value in a variable.
    std::cout << "The area of the room is: " << area << "m^2" << '\n';

    std::cout << "The volume of the room is: " << calculateVolume(length) << "m^3" << '\n'; // Can use the return value directly.
    return 0;
}

double calculateArea(double lengthforArea) // Void functions don't return anything.
{
    double totalArea = pow(lengthforArea, 2);
    return totalArea; // This will cause an error if the function is declared as void.
}

double calculateVolume(double lengthforVolume)
{
    return pow(lengthforVolume, 3); // Can return the value directly.
}
