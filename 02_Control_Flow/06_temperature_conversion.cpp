#include <iostream>

int main()
{
    double temp;
    char initialUnit;
    char finalUnit;

    std::cout << "******* Temperature Conversion ******* " << std::endl;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    std::cout << "F = Farenheit" << std::endl;
    std::cout << "C = Celcius" << std::endl;
    std::cout << "K = Kelvin" << std::endl;

    std::cout << "Enter the initial unit: ";
    std::cin >> initialUnit;

    std::cout << "Enter the final unit: ";
    std::cin >> finalUnit;

    if (initialUnit == finalUnit)
    {
        std::cout << "Does your dumb ass know that conversion means CONVERTING FROM ONE UNIT TO ANOTHER????" << std::endl;
    }
    else if (initialUnit == 'f' || initialUnit == 'F')
    {
        if (finalUnit == 'k' || finalUnit == 'K')
        {
            temp = ((temp - 32) * (5.0 / 9.0)) + 273.15;
            std::cout << "Final Temperature: " << temp << " K" << std::endl;
        }
        else if (finalUnit == 'c' || finalUnit == 'C')
        {
            temp = ((temp - 32) * (5.0 / 9.0));
            std::cout << "Final Temperature: " << temp << " C" << std::endl;
        }
        else
        {
            std::cout << "Can't with you bro.";
        }
    }
    else if (initialUnit == 'c' || initialUnit == 'C')
    {
        if (finalUnit == 'k' || finalUnit == 'K')
        {
            temp = temp + 273.15;
            std::cout << "Final Temperature: " << temp << " K" << std::endl;
        }
        else if (finalUnit == 'f' || finalUnit == 'F')
        {
            temp = (temp * (9.0 / 5.0) + 32);
            std::cout << "Final Temperature: " << temp << " F" << std::endl;
        }
        else
        {
            std::cout << "Can't with you bro.";
        }
    }
    else if (initialUnit == 'k' || initialUnit == 'K')
    {
        if (finalUnit == 'f' || finalUnit == 'F')
        {
            temp = (temp - 273.15) * (9.0 / 5.0) + 32;
            std::cout << "Final Temperature: " << temp << " F" << std::endl;
        }
        else if (finalUnit == 'c' || finalUnit == 'C')
        {
            temp = temp - 273.15;
            std::cout << "Final Temperature: " << temp << " C" << std::endl;
        }
        else
        {
            std::cout << "Can't with you bro.";
        }
    }
    else
    {
        std::cout << "Join a typing bootcamp or something." << std::endl;
    }

    return 0;
}

// The above program is purposefully written in this way to show the use of nested if-else statements and overall control flow.
// Below would be a better solution for the same problem:
/*
if (from == to) {
    std::cout << "No conversion needed!" << std::endl;
} else {
    if (from == 'F' && to == 'C') temp = (temp - 32) * 5.0 / 9.0;
    else if (from == 'F' && to == 'K') temp = (temp - 32) * 5.0 / 9.0 + 273.15;
    else if (from == 'C' && to == 'F') temp = temp * 9.0 / 5.0 + 32;
    else if (from == 'C' && to == 'K') temp = temp + 273.15;
    else if (from == 'K' && to == 'F') temp = (temp - 273.15) * 9.0 / 5.0 + 32;
    else if (from == 'K' && to == 'C') temp = temp - 273.15;
    else {
        std::cout << "Invalid input. Use F, C, or K." << std::endl;
        return 1;
    }

    std::cout << "Converted Temperature: " << temp << " " << to << std::endl;
}
*/
