#ifndef MONSTRE_H
#define MONSTRE_H

#include <string>

class Monstre : public ZoneJoueur{

    private:
        int _Card;
        const _name;
        int _HpMonstre = 10;
        int _AtkMonstre = 5;
        int _ManaMonstre = 4;
        int _HpMonstreEnnemi = 10;
        int  _AtkMonstreEnnemi = 5;
        bool _Fatigue;
        

    public:
        Monstre();
        bool afficheCarte();
        void Health();
        bool Fatigue();

        void finAction();

};


#endif