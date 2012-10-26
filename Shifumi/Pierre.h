#ifndef PIERRE_H
#define PIERRE_H

#include "Coup.h"

class Pierre : public Coup
{
    public:
        Pierre();
        virtual ~Pierre();
        virtual string type() const ;
    protected:
    private:
};

#endif // PIERRE_H
