#include "Game.h"
#include <ctime>

Game::Game(int maxNumber)
{
    // debug info
    cout << "Game constructor: object inititalized with " << maxNumber << " as maxNumber\n";
    srand(time(NULL));
    // Lisätään randomiin yksi jotta saadaan alue 1 - maxNumber
    numToGuess = (rand()%maxNumber)+1;
    guess = -1;
    numOfGuesses = 0;

}

Game::~Game()
{
    cout << "Game destructor: object cleared from stack memory!\n";
}

void Game::Play()
{
    while(guess != numToGuess){
        numOfGuesses++;
        cout << "Arvaa luku: ";
        cin >> guess;
        if(guess > numToGuess){
            cout << endl << "Arvaamasi luku on liian suuri." << endl;
        }
        if(guess < numToGuess){
            cout << endl << "Arvaamasi luku on liian pieni." << endl;
        }
    }

}

void Game::printGameResult()
{
    cout << endl << "Arvasit oikein." << endl;
    cout << "Yrityksia oli yhteensa " << numOfGuesses << endl;
}
