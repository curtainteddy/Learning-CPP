#include <iostream>

void bakePizza();
void bakePizza(std::string pizzaType);
void bakePizza(std::string pizzaType, bool urgency);

int main()
{
    bakePizza();
    bakePizza("Pepperoni");
    bakePizza("Cheese", true);
    return 0;
}

void bakePizza()
{
    std::cout << "Baking pizza... \n";
}

void bakePizza(std::string pizzaType) // Can have the same name as long as the arguments are different.
{
    std::cout << "Baking " << pizzaType << " pizza... \n";
}

void bakePizza(std::string pizzaType, bool urgency)
{
    std::cout << "Baking " << pizzaType << " pizza " << (urgency ? "chaotically..." : "casually... \n");
}