#include <iostream>
#include "Partie.h"
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));

    //Variable permettant de refaire ou non une partie
    bool continu=true;


    while(continu)
    {
        //On demande le nombre de joueur
        int nbJoueur = 0;
        cout << "Combien de joueur? (1-2)" << endl;
        while(nbJoueur != 1 && nbJoueur != 2){
            cin >> nbJoueur;
        }

        //On crée une nouvelle partie
        Partie* partie = new Partie(nbJoueur);


        int nbPts;
        cout << "En combien de points?" << endl;
        cin >> nbPts;

        //Boucle les tous de jeu tant que la partie n'est pas terminée
        while(partie->maxScore() < nbPts){
            partie->tourDeJeu();
            partie->afficherScore();
        }

        cout << "La partie est terminée. Le joueur " << partie->gagnant() << " gagne la partie" << endl;
        cout << "Voulez-vous refaire une partie? (Y/N)" << endl;

        string rep;
        cin >> rep;
        if(rep == "N"){continu = false;}

    }

    return 0;
}
