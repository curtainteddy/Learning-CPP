#include <iostream>
#include <iomanip> // To format the output using std::fixed and std::setprecision().

void showBalance(double balance);
double deposit(double balance);
double withdraw(double balance);
void showMenu();

int main()
{
    double balance = 0;
    int option = 0;

    std::cout << "Welcome to the banking program! \n";
    do
    {

        showMenu();

        std::cin >> option;

        std::cin.clear(); // Clear the error flag on cin.
        fflush(stdin);    // Clear the input buffer.

        switch (option)
        {
        case 1:
            balance += deposit(balance);
            showBalance(balance);
            break;
        case 2:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 3:
            showBalance(balance);
            break;
        case 4:
            std::cout << "Exiting program... \n";
            break;
        default:
            std::cout << "Invalid option! \n";
            break;
        }
    } while (option != 4);

    return 0;
}

void showMenu()
{
    std::cout << "**********************" << '\n';
    std::cout << "Choose an option: \n";
    std::cout << "1. Deposit Balance\n";
    std::cout << "2. Withdraw Balance\n";
    std::cout << "3. Show Balance\n";
    std::cout << "4. Exit\n";
    std::cout << "**********************" << '\n';
}

void showBalance(double balance)
{
    std::cout << "**********************" << '\n';
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}

double deposit(double balance)
{
    double depositAmount;

    std::cout << "**********************" << '\n';
    std::cout << "Enter the amount you want to deposit: ";
    std::cin >> depositAmount;
    std::cout << "Depositing $" << std::setprecision(2) << std::fixed << depositAmount << '\n';

    if (depositAmount > 10000)
    {
        std::cout << "Can't deposit more than $10000 in one transaction! \n";
        return 0;
    }
    else if (depositAmount < 0)
    {
        std::cout << "Can't deposit negative amount! \n";
        return 0;
    }
    else
    {
        return depositAmount;
    }
}

double withdraw(double balance)
{
    double withdrawAmount;

    std::cout << "**********************" << '\n';
    std::cout << "Enter the amount you want to withdraw: ";
    std::cin >> withdrawAmount;
    std::cout << "Withdrawing $" << std::setprecision(2) << std::fixed << withdrawAmount << '\n';

    if (withdrawAmount > balance)
    {
        std::cout << "Insufficient balance! \n";
        return 0;
    }
    else if (withdrawAmount < 10)
    {
        std::cout << "Minimum withdraw is for $10! \n";
        return 0;
    }
    else
    {

        return withdrawAmount;
    }
}