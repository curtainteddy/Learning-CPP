#include <iostream>

void curseYoAss() // Void functions don't return anything.
{
    std::cout << "Curse you! \n";
}

void blessYoAss(std::string personname, int personage); // Function declaration. This is a forward declaration. It tells the compiler that a function with this name exists.

int main()
{
    curseYoAss(); // To invoke a function, you simply write its name followed by parentheses.
    curseYoAss(); // You can invoke a function as many times as you want.
    curseYoAss(); // Functions needs to be declared before they are called.

    std::string name = "John";
    int age = 25;
    blessYoAss(name, age);
    return 0;
}

// Functions can be declared anywhere in the code.
void blessYoAss(std::string personname, int personage) // Receiving an argument with the datatype.
{
    std::cout << "Bless you! \n";
    // std::cout << name; // This will cause an error because name is not in scope unless the variable is passed as an argument.
    std::cout << personname << personage << '\n';
}
// Since this function was declared below main(). It needs to be declared before it is called.
// Functions can be defined after main() as long as they are declared before they are called.