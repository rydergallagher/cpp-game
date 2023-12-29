#ifndef GAMEFLOW_H
#define GAMEFLOW_H

#include "main.h"
#include "World.h"

class GameFlow{

    private:
        
        World gameWorld;

    public:

        GameFlow();

        int displayCombatMenu();

        void combat();

        void sectionOne();

};

#endif