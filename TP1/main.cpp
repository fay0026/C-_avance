#include <iostream>
#include <player.h>
#include <thief.h>
#include <wizard.h>
#include <warrior.h>
#include <vector>
#include <fstream>
#include <chrono>
#include <thread>

using namespace std;

void loadPlayers(string, vector<Player*>&)  throw (invalid_argument);

void testClone() {
    Wizard* w = new Wizard(cin); // création par saisie au clavier
    cout << *w << endl;
    Wizard* c = w->clone(); // clonage
    cout << *c << endl;
    delete c;
    delete w;
}

int main()
{
    vector<Player*> players;
    loadPlayers("personnages.txt",players);
    testClone();
    //Destruction
    for (int i=0;i<players.size();i++) {
        delete players[i];
    }
   return 0;
}

void fight(int *tour, vector<Player*> &players, int *vivants) {
    tour += 1;
    cout << "Tour " << *tour << " -----------------------" << endl;
    int c1 = rand() % players.size();
    while (!players[c1]->isAlive()) {
        c1 = rand() % players.size();
    }
    int c2 = rand() % players.size();
    while (!players[c2]->isAlive() || players[c1] == players[c2]) {
        c2 = rand() % players.size();
    }
    if (c1 > c2) {
        cout << *players[c2] << endl;
        cout << "A BATTU" << endl;
        cout << *players[c1] << endl;
        --*players[c1];
        if (!players[c1]->isAlive()) {
            cout << endl;
            cout << "Le combattant " << players[c1]->getName() << " est mort. Qu'il repose en paix." << endl;
            *vivants -= 1;
        }
    } else {
        cout << *players[c1] << endl;
        cout << "A BATTU" << endl;
        cout << *players[c2] << endl;
        --*players[c2];
        if (!players[c2]->isAlive()) {
            cout << endl;
            cout << "Le combattant " << players[c2]->getName() << " est mort. Qu'il repose en paix." << endl;
            *vivants -= 1;
        }
    }
}

void loadPlayers(string filename, vector<Player*> &players) throw (invalid_argument) {
    using namespace std::this_thread;
    using namespace std::chrono;
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
    int tour = 0;
    cout << "Le jeu commence.\n Pour commencer un combat entre deux combattants tirés au sort, tapez c.\n Pour afficher la liste des combattants, tapez a.\n Enfin, pour arrêter de jouer, tapez q. \n C pour la mort." << endl;
    cout << "Choix (a pour afficher, c pour combat, ou q pour quitter) : ";
    string choix;
    cin >> choix;
    int vivants = players.size();
    while (choix != "q") {
        if (choix == "a") {
            for (int i=0;i<players.size();i++) {
                cout << "Joueur "<<i<<" -> "<< *players[i] <<endl;
            }
        } else if (choix == "c") {
            fight(&tour, players, &vivants);
        }
        else if (choix == "C") {
            while (vivants > 1) {
                fight(&tour, players, &vivants);
            }
            cout << "LE TOURNOIS EST FINI !" << endl;
            in.close();
        }
        cout << "\nChoix (a pour afficher, c pour combat, ou q pour quitter) : ";
        cin >> choix;
    }
    // fermeture du fichier
    in.close();
}
