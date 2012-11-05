#include "Coup.h"

using namespace std;

Coup::Coup()
{
    //ctor
}

Coup::Coup(Joueur* j)
{
    //ctor
    joueur = j;
}

Coup::~Coup()
{
    //dtor
}

// On définit l'opérateur d'égalité en comparant les string
bool operator==(const Coup& premiercoup, const Coup& deuxiemecoup){
    return premiercoup.type() == deuxiemecoup.type();
}

// On définit l'opérateur inférieur, si premiercoup<deuxiemecoup alors deuxiemecoup gagne
bool operator<(const Coup& premiercoup, const Coup& deuxiemecoup){
    return (premiercoup.type() == "pierre" && deuxiemecoup.type() == "feuille")
            || (premiercoup.type() == "ciseaux" && deuxiemecoup.type() == "pierre")
            || (premiercoup.type() == "feuille" && deuxiemecoup.type() == "ciseaux");
}

// On définit l'opérateur <<, qui renvoie directement le string
ostream& operator<<(ostream &flux, const Coup& coup){
    flux << coup.type();
    return flux;
}
