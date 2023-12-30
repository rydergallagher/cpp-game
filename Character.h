#ifndef CHARACTER_H
#define CHARACTER_H

#include "main.h"

class Character{

    private:

        std::string name;
        int healthPoints;
        int strength;
        int defense;
    
    public:

        Character(std::string name, int healthPoints, int strength, int defense); // constructor
        Character(); // default constructor

        // getters and setters
        std::string getName();
        void setName(std::string name);

        int getHealthPoints();
        void setHealthPoints(int healthPoints);
        
        int getStrength();
        void setStrength(int strength);

        int getDefense();
        void setDefense(int defense);
        
};

#endif