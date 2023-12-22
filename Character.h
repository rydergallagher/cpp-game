#ifndef CHARACTER_H
#define CHARACTER_H

#include "main.h"

class Character{

    private:

        std::string name;
        int hp;
        int strength;
        int defense;
    
    public:

        Character(std::string name, int hp, int strength, int defense);

};

#endif