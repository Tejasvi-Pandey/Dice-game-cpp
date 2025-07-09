#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice()
{
    return (rand() % 6) + 1;
}

int main()
{
    srand(time(0));

    char playAgain;

    cout << "Player vs Computer: Dice Battle!\n";

    do
    {
        int playerRoll = rollDice();
        int computerRoll = rollDice();

        cout << "\nYou rolled: " << playerRoll << endl;
        cout << "Computer rolled: " << computerRoll << endl;

        if (playerRoll > computerRoll)
        {
            cout << "You win this round!\n";
        }
        else if (playerRoll < computerRoll)
        {
            cout << "Computer wins this round!\n";
        }
        else
        {
            cout << "It's a tie!\n";
        }

        cout << "\nPlay again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThanks for playing!\n";
    return 0;
}
