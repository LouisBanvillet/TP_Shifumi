#include "Partie.h"

Partie::Partie(int nbJoueur)
{
    if(nbJoueur == 2){
        j1 = new Humain();
        j2 = new Humain();
    }
    else{
        j1 = new Humain();
        j2 = new IA();
    }
}

Partie::~Partie()
{
    delete j1;
    delete j2;
}

//Méthode régissant un tour de jeu
void Partie::tourDeJeu(){
    Coup* c1 = j1->obtenir_coup();
    Coup* c2 = j2->obtenir_coup();
    cout << "Le coup du joueur 1 : " << *c1 << endl;
    cout << "Le coup du joueur 2 : " << *c2 << endl;

    if(*c1 == *c2){
        cout << "Personne ne gagne le tour." << endl;
    }
    else if(*c1 < *c2){
        cout << "Le joueur 2 gagne le tour!" << endl;
        j2->incrementScore();
    }
    else{
        cout << "Le joueur 1 gagne le tour" << endl;
        j1->incrementScore();
    }
}

//Méthode d'affichage du score des deux joueurs
void Partie::afficherScore()
{
    cout << "Le joueur 1 a : " << j1->getScore() << " points" << endl;
    cout << "Le joueur 2 a : " << j2->getScore() << " points" << endl;
}

//Méthode permettant d'obtenir le plus haut score pour savoir si la partie est terminée ou non
int Partie::maxScore()
{
    int max = 0;

    if(j1->getScore() < j2->getScore()){max = j2->getScore();}
    else{max = j1->getScore();}

    return max;
}

//Détermine le gagnant
int Partie::gagnant()
{
    int gagnant = 0;

    if(j1->getScore() < j2->getScore()){gagnant = 2;}
    else{gagnant = 1;}

    return gagnant;
}
