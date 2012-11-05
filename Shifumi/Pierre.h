#ifndef PIERRE_H
#define PIERRE_H

#include "Coup.h"

class Pierre : public Coup
{
    public:
        Pierre();
        Pierre(Joueur*);
        virtual ~Pierre();
        virtual string type() const ;
        static int nombre;
        static void raz(){nombre = 0;};
    protected:
    private:
};

#endif // PIERRE_H
