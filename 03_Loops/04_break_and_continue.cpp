#include <iostream>

int main()
{

    // Breaks are used to exit the loop immediately and continue are used to skip the current iteration and continue with the next iteration.

    for (int i = 1; i <= 30; i++)
    {
        if (i >= 10 && i <= 20)
        {
            continue; // Skipping the iterations where i is between 10 and 20.
        }
        else if (i == 25)
        {
            break; // Breaking the loop when i hits 25.
        }

        std::cout << i << '\n';
    }

    return 0;
}