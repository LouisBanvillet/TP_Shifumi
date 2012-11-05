#include "Ciseaux.h"

int Ciseaux::nombre = 0;

Ciseaux::Ciseaux():Coup()
{
    nombre++;
}

Ciseaux::Ciseaux(Joueur* j):Coup(j)
{
}

Ciseaux::~Ciseaux()
{
    //dtor
}

string Ciseaux::type() const {
    return "ciseaux";
}
