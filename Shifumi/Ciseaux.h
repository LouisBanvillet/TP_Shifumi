#ifndef CISEAUX_H
#define CISEAUX_H

#include "Coup.h"

class Ciseaux : public Coup
{
    public:
        Ciseaux();
        Ciseaux(Joueur*);
        virtual ~Ciseaux();
        virtual string type() const;
        static int nombre;
        static void raz(){nombre = 0;};
    protected:
    private:
};

#endif // CISEAUX_H
