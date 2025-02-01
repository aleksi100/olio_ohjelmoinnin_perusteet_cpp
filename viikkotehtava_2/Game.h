#ifndef GAME_H
#define GAME_H
#include <iostream>
using namespace std;

class Game
{
public:
    Game(int maxNumber);
    ~Game(void);
    void Play(void);
    void printGameResult(void);
private:
    int numOfGuesses;
    int numToGuess;
    int guess;

};

#endif // GAME_H
