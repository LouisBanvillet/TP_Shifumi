#ifndef CISEAUX_H
#define CISEAUX_H

#include "Coup.h"

class Ciseaux : public Coup
{
    public:
        Ciseaux();
        virtual ~Ciseaux();
        virtual string type() const ;
    protected:
    private:
};

#endif // CISEAUX_H
