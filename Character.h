#ifndef CHARACTER_H
#define CHARACTER_H


/*
// Class that defines any playable or nonplayable character
// name is what the game will call the character
// hp is how much health the character has
// strength is how much damage the character deals
// defense is how much damage the character doesn't take from an attack
*/

#include "main.h"

class Character{

    private:

        std::string name;
        int hp;
        int strength;
        int defense;
    
    public:

        Character(std::string name, int hp, int strength, int defense);     // constructor

        Character();    // default constructor

        void setName(std::string name);     // name setter

        std::string getName();

};

#endif