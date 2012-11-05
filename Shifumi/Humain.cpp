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

    cout << "Choisissez un coup, entrez : feuille (f), pierre (p), ou ciseaux (c)." << endl;

    while(coupChoisi != "pierre" && coupChoisi != "feuille" && coupChoisi != "ciseaux" && coupChoisi != "c" && coupChoisi != "f" && coupChoisi != "p"){
        cin >> coupChoisi;
    }

    if((coupChoisi == "pierre")||(coupChoisi == "p")){coup = new Pierre();}
    else if((coupChoisi == "feuille")||(coupChoisi=="f")){coup = new Feuille();}
    else if((coupChoisi == "ciseaux")||(coupChoisi=="c")){coup = new Ciseaux();}

    return coup;
}
