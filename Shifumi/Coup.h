#ifndef COUP_H
#define COUP_H

#include <string>

using namespace std;

class Joueur;

class Coup
{
    public:
        Coup();
        Coup(Joueur*);
        virtual ~Coup();
        virtual string type() const =0;
        Joueur* getJoueur() {return joueur;};

    protected:
        Joueur *joueur;
    private:
};

    bool operator==(const Coup& premiercoup, const Coup& deuxiemecoup);
    bool operator<(const Coup& premiercoup, const Coup& deuxiemecoup);
    ostream& operator<<(ostream &flux, const Coup& coup);

#endif // COUP_H
