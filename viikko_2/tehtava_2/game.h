#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


class Game
{
public:
    Game(int);
    ~Game();
   void play();

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numberOfGuesses = 0;

    void printGameResult();
};

#endif // GAME_H
