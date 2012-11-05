#ifndef HUMAIN_H
#define HUMAIN_H

#include "Joueur.h"

class Humain : public Joueur
{
    public:
        Humain();
        virtual ~Humain();
        virtual Coup* obtenir_coup();
    protected:
    private:
};

#endif // HUMAIN_H
