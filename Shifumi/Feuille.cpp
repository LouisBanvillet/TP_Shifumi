#include "Feuille.h"

using namespace std;

Feuille::Feuille():Coup()
{
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
