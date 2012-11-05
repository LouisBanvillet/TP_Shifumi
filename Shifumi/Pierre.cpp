#include "Pierre.h"

int Pierre::nombre = 0;

Pierre::Pierre():Coup()
{
    nombre++;
}

Pierre::Pierre(Joueur* j):Coup(j)
{
}

Pierre::~Pierre()
{
    //dtor
}

string Pierre::type() const {
    return "pierre";
}
