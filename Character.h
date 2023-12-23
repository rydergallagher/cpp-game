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
        int experience;
        int level;
    
    public:

        Character(std::string name, int hp, int strength, int defense, int experience, int level);     // constructor

        Character();    // default constructor

        void setName(std::string name);     // name setter

        std::string getName();

        void setHp(int hp);

        int getHp();

        void setStrength(int strength);

        int getStrength();

        void setDefense(int defense);

        int getDefense();

};

#endif