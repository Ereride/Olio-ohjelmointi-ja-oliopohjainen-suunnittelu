#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{




    int luku, arvaus;
    //Arvotaan satunnainen luku
    srand(static_cast<unsigned int>(time(nullptr))); //Kysy tuo sulkeissa oleva miten tuo vaikuttaa?
    luku = rand()%21;
    bool oikein = false;

  while (!oikein){

      //Kysytään pelaajalta arvaus
      cout << "Arvaa luku 0-20 valilta \n";
      cin >> arvaus;

      //Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
      //Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus”
      //Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.
      if (arvaus > luku){
        cout << "luku on pienempi \n"<< endl;
      } else if (arvaus < luku){
        cout << "luku on suurempi \n"<< endl;
        } else {
        cout << "OIKEA VASTAUS!!!! Arvottu luku oli " << luku << endl;
        oikein = true;
        }
    }


return 0;
}



