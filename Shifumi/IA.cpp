#include "IA.h"
#include <cmath>
#include <cstdlib>


using namespace std;

IA::IA()
{
    //ctor
}

IA::~IA()
{
    //dtor
}

Coup* IA::obtenir_coup() {
    int choix = rand() % 3;
    switch(choix){
        case 0 : {
            return new Pierre();
            break;
        }
        case 1 : {
            return new Feuille();
            break;
        }
        case 2 : {
            return new Ciseaux();
            break;
        }
    }
}

