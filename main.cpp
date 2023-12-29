#include "main.h"
#include "World.h"

int main(){

    //Section for testing at the moment

    World gameWorld;
    gameWorld.createMainCharacter();
    gameWorld.createEnemy("Goblin", 10, 10);
    gameWorld.createEnemy("Goblin2", 10, 10);
    gameWorld.displayEnemies();

    return 0;

}