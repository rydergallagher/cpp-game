#ifndef CHARACTER_H
#define CHARACTER_H

/*
// Class that defines any playable or nonplayable character
// 
*/

#include "main.h"

class Character{

    private:

        std::string name;
        int hp;
        int strength;
        int defense;
    
    public:

        Character(std::string name, int hp, int strength, int defense);
        Character();

};

#endif