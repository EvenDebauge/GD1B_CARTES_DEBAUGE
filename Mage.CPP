#ifndef MAGE_CPP
#define MAGE_CPP


#include "Mage.h"
#include "monstre.h"
#include <iostream>


    Mage::Mage() : {}


    void Mage::afficheCarteMage(){
        _name.affiche();
        CarteMage.affiche();
        _HpMage.affiche();
    }

    void Mage::PickCard(){
        for(int i=0;i<2;i++){
            if(Deck != 0){
                Deck = i-1
            }
        }
    }

    void Mage:: Summon(){
        if ( _Board < 5){
            //Le monstre occupe une place sur le board
            _Board += 1;
            //On soustrait la mana du joueur au coût en mana du Monstre
            Mana -= _ManaMonstre
            // Le joueur rentre les informations de son invocation
            //std::cin >> "Your Summonning's name is :" << std::endl; 
            //std::cin >> "It's Hp is:"  << std ::endl;
            //std::cin >> "It's Atck is:"  << std::endl; 
            monstre.afficheCarte();
        }
        
    }


    bool Mage::afficheBoard(){
        while(_HpMage > 0){
            Board.affiche();
        }
    }



    bool Mage::HealthMage(){
        if (_HpMage >! 0){
            afficheCarteMage()=true
            afficheBoard()= true
        }
        else{
            afficheCarteMage()= false
            afficheBoard()= false
        }

        return false;
    }

    void Mage::AttackEnnemi(){
        _HpMageEnnemi.AttackEnnemi();
    }

        void Mage::AttackEnnemi(){
        _HpMonstreEnnemi.AttackMonstreEnnemi();
    }




    void Mage::finTour(){
        if(AllMonster_Tired= true){ //Si tous les monstres ont attaqués)
            newTurn = true
 
        }
        return false();
   }
   
   void Mage::newTurn(){
       AllMonster_Tired = false;
       _Mana = 10;
       Mage.PickCard();
   }

   bool Mage::Victoire(){
       if(_HpMageEnnemi == 0){
            Victoire = true;
            afficheBoard = false;
       }  
    return false();     
   }


#endif