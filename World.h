#ifndef WORLD_H
#define WORLD_H

#include "main.h"
#include "Character.h"

class World{

    private:

        Character mainCharacter;
    
    public:

        World();

        void createMainCharacter();

};

#endif