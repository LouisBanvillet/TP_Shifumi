#ifndef JOUEUR_H
#define JOUEUR_H

#include <iostream>
#include <string>
#include "Coup.h"
#include "Pierre.h"
#include "Ciseaux.h"
#include "Feuille.h"

using namespace std;

class Joueur
{
    public:
        Joueur();
        virtual ~Joueur();
        virtual Coup* obtenir_coup()=0;

    protected:
    private:
};

#endif // COUP_H
