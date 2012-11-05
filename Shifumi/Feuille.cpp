#include "Feuille.h"

int Feuille::nombre = 0;

Feuille::Feuille():Coup()
{
    nombre++;
}
Feuille::Feuille(Joueur* j):Coup(j)
{
}

Feuille::~Feuille()
{
    //dtor
}

string Feuille::type() const {
    return "feuille";
}
