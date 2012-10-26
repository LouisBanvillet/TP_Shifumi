#ifndef IA_H
#define IA_H

#include "Joueur.h"

class IA : public Joueur
{
    public:
        IA();
        virtual ~IA();
        virtual Coup* obtenir_coup() ;
    protected:
    private:
};

#endif // CISEAUX_H
