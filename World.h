#ifndef WORLD_H
#define WORLD_H

#include "main.h"
#include "Character.h"

class World{

    private:

        Character mainCharacter;
        std::vector<Character> enemyVector;
    
    public:

        World();

        void createMainCharacter();
        void createEnemy(std::string name, int hp, int ap);

};

#endif