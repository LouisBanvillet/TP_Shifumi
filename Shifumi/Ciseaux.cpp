#include "Ciseaux.h"

Ciseaux::Ciseaux():Coup()
{
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
