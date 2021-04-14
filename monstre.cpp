#ifndef MONSTRE_CPP
#define MONSTRE_CPP


#include "monstre.h"
#include "Mage.h"
#include <iostream>


    Monstre::Monstre() : {}


    void Monstre::afficheCarte(){
        _Card.affiche();
        _HpMonstre.affiche();
        _AtkMonstre.affiche();
        _Fatige.affiche();
    }


    void Monstre::AttackMonstreEnnemi(){
        while(_HpMonstre > 0; _Fatigue= false && _HpMonstreEnnemi >0){
            _HpMonstreEnnemi =  _HpMonstreEnnemi - _AtkMonstre;
            _HpMonstre =  _HpMonstre - _AtkMonstreEnnemi;
        }
        _Fatigue = true
    }

    void Monstre::AttackEnnemi(){
        while(_HpMage > 0 && _HpMageEnnemi >0){
            _HpMageEnnemi =  _HpMageEnnemi - _AtkMonstre;
        }
        _Fatigue = true
    }



    bool Monstre::Health(){
        if (_HpMonstre >! 0){
            afficheCarte()=true
        }
        else{
            afficheCarte()=false
        }

        return false;
    }


    void Monstre::finTour(){
        _Fatigue = true
   }

#endif