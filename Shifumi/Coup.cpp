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

// On d�finit l'op�rateur d'�galit� en comparant les string
bool operator==(const Coup& premiercoup, const Coup& deuxiemecoup){
    return premiercoup.type() == deuxiemecoup.type();
}

// On d�finit l'op�rateur inf�rieur, si premiercoup<deuxiemecoup alors deuxiemecoup gagne
bool operator<(const Coup& premiercoup, const Coup& deuxiemecoup){
    return (premiercoup.type() == "pierre" && deuxiemecoup.type() == "feuille")
            || (premiercoup.type() == "ciseaux" && deuxiemecoup.type() == "pierre")
            || (premiercoup.type() == "feuille" && deuxiemecoup.type() == "ciseaux");
}

// On d�finit l'op�rateur <<, qui renvoie directement le string
ostream& operator<<(ostream &flux, const Coup& coup){
    flux << coup.type();
    return flux;
}
