#include "Pierre.h"

using namespace std;

Pierre::Pierre():Coup()
{
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
