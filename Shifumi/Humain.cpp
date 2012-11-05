#include "Humain.h"

Humain::Humain():Joueur()
{
    //ctor
}

Humain::~Humain()
{
    //dtor
}

Coup* Humain::obtenir_coup() {
    string coupChoisi;
    Coup* coup = new Pierre(this);

    cout << "Choisissez un coup, entrez : feuille, pierre ou ciseaux." << endl;

    while(coupChoisi != "pierre" && coupChoisi != "feuille" && coupChoisi != "ciseaux"){
        cin >> coupChoisi;
    }

    if(coupChoisi == "pierre"){coup = new Pierre();}
    else if(coupChoisi == "feuille"){coup = new Feuille();}
    else if(coupChoisi == "ciseaux"){coup = new Ciseaux();}

    return coup;
}
