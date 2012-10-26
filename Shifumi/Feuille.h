#ifndef FEUILLE_H
#define FEUILLE_H

#include "Coup.h"

class Feuille : public Coup
{
    public:
        Feuille();
        virtual ~Feuille();
        virtual string type() const ;
    protected:
    private:
};

#endif // FEUILLE_H
