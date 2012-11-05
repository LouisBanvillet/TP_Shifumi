#include <iostream>
#include "Partie.h"
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));

    Partie* partie = new Partie();

    bool continu=true;


    while(continu)
    {

        int nbPts;
        cout << "En combien de points?" << endl;
        cin >> nbPts;

        while(partie->maxScore() < nbPts){
            partie->tourDeJeu();
            partie->afficherScore();
        }
        cout << "La partie est terminée. Le joueur " << partie->gagnant() << " gagne la partie" << endl;
        cout << "Voulez-vous refaire une partie? (Y/N)" << endl;

        string rep;
        cin >> rep;
        if(rep == "N"){continu = false;}
        partie = new Partie();
    }

    return 0;
}
