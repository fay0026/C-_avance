#include <iostream>
#include <player.h>
#include <thief.h>
#include <vector>
#include <fstream>

using namespace std;

void loadPlayers(string, vector<Player*>)  throw (invalid_argument);

int main()
{
    /*
   Player * thief = new Thief();
   thief->isAlive();
   delete thief;
   */

   return 0;
}

void loadPlayers(string filename, vector<Player*> players) throw (invalid_argument) {
    // ouverture du fichier
    ifstream in(filename.c_str());
    // protection ouverture
    if (!in) throw invalid_argument("erreur d'ouverture du fichier");

    // création et lecture des joueurs dans le fichier
    int code;
    do {
        // lecture du code
        in >> code;
        switch (code)
        {
            case '1':
                Wizard wiz = new Wizard();
                break;
            case '2':
                break;
            case '3':
                break;
        }


    }
    while ( code != 0);
    // fermeture du fichier
    in.close();
}


