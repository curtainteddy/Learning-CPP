#include <iostream>

void showResult(int score, int size);

int main()
{
    // Quiz game
    std::string questions[] = {"1. What is generally said after the word \"skibidi\"? :",
                               "2. What is to flex on others with you looks? :",
                               "3. Due to lack of what, flirting fails? :"};

    std::string options[][4] = {{"A. toilet", "B. ohio", "C. alabama", "D. crazy"},
                                {"A. swag", "B. mog", "C. sheesh", "D. cut G"},
                                {"A. fortnite", "B. skill issue", "C. indian accent", "D. rizz"}};

    char answers[] = {'A', 'B', 'D'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

    for (int i = 0; i < size; i++)
    {
        std::cout << '\n';
        std::cout << "****************************************************" << '\n';
        std::cout << questions[i] << '\n';
        std::cout << "****************************************************" << '\n';

        for (int j = 0; j < sizeof(options[i]) / sizeof((options[0][0])); j++)
        {
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answers[i])
        {
            std::cout << "Correct!" << '\n';
            score++;
        }
        else
        {
            std::cout << "Incorrect!" << '\n';
            std::cout << "Correct Answer: " << answers[i] << '\n';
        }
    }

    showResult(score, size);
    return 0;
}

void showResult(int score, int size)
{
    std::cout << '\n';
    std::cout << "****************************************************" << '\n';
    std::cout << "Your score is: " << score << "/" << size << '\n';
    std::cout << "****************************************************" << '\n';
}
