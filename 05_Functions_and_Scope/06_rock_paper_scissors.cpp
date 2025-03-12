#include <iostream>
#include <ctime>
#include <cstdlib>

char findPlayerChoice();
char findComputerChoice();
char findWinner(char playerChoice, char computerChoice);

int main()
{
    srand(time(NULL));
    char playerChoice = findPlayerChoice();
    char computerChoice = findComputerChoice();

    std::cout << "Player choice: " << playerChoice << '\n';
    std::cout << "Computer choice: " << computerChoice << '\n';
    std::cout << "******************" << '\n';

    char finalResult = findWinner(playerChoice, computerChoice);

    if (finalResult == 't')
    {
        std::cout << "It's a tie! \n";
    }
    else if (finalResult == 'p')
    {
        std::cout << "Player wins! \n";
    }
    else if (finalResult == 'c')
    {
        std::cout << "Computer Wins! \n";
    }
    else
    {
        std::cout << "Something went wrong! \n";
    }

    return 0;
}

char findPlayerChoice()
{

    char playerDecision;
    do
    {

        std::cout << "Enter your choice: " << '\n';
        std::cout << "******************" << '\n';
        std::cout << "[r] Rock" << '\n';
        std::cout << "[p] Paper" << '\n';
        std::cout << "[s] Scissors" << '\n';
        std::cin >> playerDecision;
    } while (playerDecision != 'r' && playerDecision != 'p' && playerDecision != 's');
    return playerDecision;
}
char findComputerChoice()
{
    int computerDecision = rand() % 3 + 1;
    switch (computerDecision)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    default:
        return 'r'; // Defaults to rock.
    }
}
char findWinner(char playerChoice, char computerChoice)
{
    if (playerChoice == computerChoice)
    {
        return 't';
    }
    else if (playerChoice == 'r' && computerChoice == 's')
    {
        return 'p';
    }
    else if (playerChoice == 'p' && computerChoice == 'r')
    {
        return 'p';
    }
    else if (playerChoice == 's' && computerChoice == 'p')
    {
        return 'p';
    }
    else
    {
        return 'c';
    }
}