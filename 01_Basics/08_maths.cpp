#include <iostream>
#include <cmath> // For mathematical functions

int main()
{
    double x = 4;
    double y = 5;

    double maxVal;
    double minVal;

    maxVal = std::max(x, y); // Returns the maximum of x and y
    minVal = std::min(x, y); // Returns the minimum of x and y

    double powVal;
    powVal = pow(x, y); // Returns x raised to the power of y

    double sqrtVal;
    sqrtVal = sqrt(powVal); // Returns the square root of powVal

    double roundVal;
    roundVal = round(123.456); // Rounds the value of sqrtVal

    double absVal;
    absVal = abs(-10); // Returns the absolute value of -10

    double ceilVal;
    ceilVal = ceil(123.456); // Returns the smallest integer greater than or equal to 123.456

    double floorVal;
    floorVal = floor(123.456); // Returns the largest integer less than or equal to 123.456

    std::cout << "Max Value: " << maxVal << std::endl;
    std::cout << "Min Value: " << minVal << std::endl;
    std::cout << x << " raised to the power of " << y << " is " << powVal << std::endl;
    std::cout << "Square root of " << powVal << " is " << sqrtVal << std::endl;
    std::cout << "Rounded value of 123.456 is " << roundVal << std::endl;
    std::cout << "Absolute value of -10 is " << absVal << std::endl;
    std::cout << "Ceil value of 123.456 is " << ceilVal << std::endl;
    std::cout << "Floor value of 123.456 is " << floorVal << std::endl;
    return 0;
}