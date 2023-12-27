#ifndef CHARACTER_H
#define CHARACTER_H

#include "main.h"

class Character{

    private:

        std::string name;
        int healthPoints;
        int attackPoints;
    
    public:

        Character(std::string name, int healthPoints, int attackPoints); // constructor
        Character(); // default constructor

        // getters and setters
        std::string getName();
        void setName(std::string name);

        int getHealth();
        void setHealth(int healthPoints);
};

#endif