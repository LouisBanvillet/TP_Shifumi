#ifndef FEUILLE_H
#define FEUILLE_H

#include "Coup.h"

class Feuille : public Coup
{
    public:
        Feuille();
        Feuille(Joueur*);
        virtual ~Feuille();
        virtual string type() const ;
        static int nombre;
        static void raz(){nombre = 0;};
    protected:
    private:
};

#endif // FEUILLE_H
