#include "game.h"

Game::Game(int maxNumber) : maxNumber(maxNumber)
{
  cout << "Korkeimmaksi numeroksi on annettu " << maxNumber << endl;
}
Game::~Game()
{
    cout <<"Tuhottiin peli"<< endl;
}
void Game::play(){

    srand(time(0));
    randomNumber = rand()%maxNumber+1;
    bool right = false;
    while (!right)
    {
        cout << "Arvaa luku 1-" << maxNumber << " valilta: \n";
        cin >> playerGuess;
        numberOfGuesses++;
        //Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
        //Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus”
        //Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.
        if (playerGuess > randomNumber){
          cout << "Luku on pienempi \n"<< endl;

          } else if (playerGuess < randomNumber){
          cout << "Luku on suurempi \n"<< endl;

          } else {
          printGameResult();
          right = true;

          }
    }
}



void Game::printGameResult(){
    cout << "OIKEA VASTAUS!!!! Arvottu luku oli " << randomNumber << endl;
    cout << "Arvauksien maara oli "<< numberOfGuesses << endl;
}
