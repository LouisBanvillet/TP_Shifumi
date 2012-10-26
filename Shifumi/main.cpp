#include <iostream>
#include "Coup.h"
#include "Pierre.h"
#include "Ciseaux.h"
#include "Feuille.h"
#include "Joueur.h"
#include "Humain.h"
#include "IA.h"


using namespace std;

int main()
{
    //Coup* pierre = new Pierre();
    //Coup* ciseaux = new Ciseaux();

    //if(*ciseaux < *pierre){cout << "naze" << endl;}
    //cout << *pierre << endl;

    Humain* j1 = new Humain();

    cout << "voilà le coup tapé" << j1->obtenir_coup();


    return 0;
}
