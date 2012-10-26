#ifndef COUP_H
#define COUP_H

#include <string>

using namespace std;

class Coup
{
    public:
        Coup();
        virtual ~Coup();
        virtual string type() const =0;
    protected:
    private:
};

    bool operator==(const Coup& premiercoup, const Coup& deuxiemecoup);
    bool operator<(const Coup& premiercoup, const Coup& deuxiemecoup);
    ostream& operator<<(ostream &flux, const Coup& coup);

#endif // COUP_H
