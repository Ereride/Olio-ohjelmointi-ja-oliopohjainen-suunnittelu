#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game (int maxnum){

    int luku, arvaus, arvaukset = 0;
    bool oikein = false;

    cout << "Syota korkein luku: ";
    cin >> maxnum;
    //Arvotaan satunnainen luku

    srand(time(0)); //Kysy tuo sulkeissa oleva miten tuo vaikuttaa?
    luku = rand()%maxnum+1;


  while (!oikein){

      //Kysytään pelaajalta arvaus
      cout << "Arvaa luku 1-" << maxnum << " valilta: \n";
      cin >> arvaus;
      arvaukset++;

      //Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
      //Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus”
      //Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.
      if (arvaus > luku){
        cout << "Luku on pienempi \n"<< endl;
        } else if (arvaus < luku){
        cout << "Luku on suurempi \n"<< endl;
        } else {
        cout << "OIKEA VASTAUS!!!! Arvottu luku oli " << luku << endl;
        oikein = true;
        }
    }
  return arvaukset;
}

int main()
{
int korkein;
int arvaustenMaara = game(korkein);
cout << "Arvausten maara: " << arvaustenMaara << endl;


return 0;
}

