#include <iostream>
#include <player.h>
#include <thief.h>
#include <wizard.h>
#include <warrior.h>
#include <vector>
#include <fstream>

using namespace std;

void loadPlayers(string, vector<Player*>&)  throw (invalid_argument);

int main()
{
    /*
   Player * thief = new Thief();
   thief->isAlive();
   delete thief;
   */
    vector<Player*> players;
    loadPlayers("personnages.txt",players);
    cout << "Nombres joueurs : "<<players.size() <<endl;
    for (int i=0;i<players.size();i++) {
        cout << "Joueur "<<i<<" -> "<< *players[i] <<endl;
    }
    //Destruction
    for (int i=0;i<players.size();i++) {
        delete players[i];
    }
   return 0;
}

void loadPlayers(string filename, vector<Player*> &players) throw (invalid_argument) {
    // ouverture du fichier
    ifstream in(filename.c_str());
    // protection ouverture
    if (!in) throw invalid_argument("erreur d'ouverture du fichier");

    // création et lecture des joueurs dans le fichier
    int code;
    do {
        // lecture du code
        in >> code;
        Player* ply;
        switch (code)
        {
            case 1: {
                Wizard* ply = new Wizard(in);
                players.push_back(ply);
                break;
            }
            case 2: {
                Warrior* ply = new Warrior(in);
                players.push_back(ply);
                break;
                }
            case 3: {
                Thief* ply = new Thief(in);
                players.push_back(ply);
                break;
                }
        }
    }
    while ( code != 0);
    // fermeture du fichier
    in.close();
}


