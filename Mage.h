#ifndef MAGE_H
#define MAGE_H

#include <string>

class Mage: public ZoneJoueur{

    private:
        int CarteMage;
        int _Board = 0;
        const _name;
        int _HpMage = 20;
        int _HpMageEnnemi = 20;
        int _Monstre_Board;
        bool AllMonster_Tired;
        int _Mana = 10;
        int _ManaEnnemi = 10;
        bool newturn;
        int Deck = 24;
        

    public:
        Mage();
        bool newTurn();
        bool afficheCarteMage();
        bool afficheBoard();
        void HealthMage();
        void AttackEnnemi();
        void AttackMonstreEnnemi();
        void Summon();
        void PickCard();
        bool Victoire();

        void finTour();

};

#endif