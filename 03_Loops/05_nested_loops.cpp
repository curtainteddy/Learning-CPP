#include <iostream>

int main()
{

    // Nested loops are loops within loops. They are used when we want to iterate over a set of elements multiple times.

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            std::cout << i << " * " << j << " = " << i * j << '\n';
        }

        std::cout << '\n';
    }

    std::string news = "Khabar";
    for (int a = 1; a <= 3; a++)
    {
        for (int b = 1; b <= 3; b++)
        {
            for (int c = 1; c <= 3; c++)
            {
                std::cout << "News ID: " << a << b << c << " Yo ho " << news << " vitra ko " << news << '\n';
            }
        }
    }

    return 0;
}