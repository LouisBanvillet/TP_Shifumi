#ifndef PARTIE_H
#define PARTIE_H

#include <iostream>
#include <string>
#include "Joueur.h"
#include "Humain.h"
#include "IA.h"

using namespace std;

class Partie{
    public:
        Partie(int nbJoueur);
        ~Partie();
        void tourDeJeu();
        void afficherScore();
        int maxScore();
        int gagnant();

    protected:
        Joueur* j1;
        Joueur* j2;

    private:
};

#endif // PARTIE_H
