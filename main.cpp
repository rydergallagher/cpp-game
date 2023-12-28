#include "main.h"

int main(){

    EventHandler events;
    World gameWorld;
    Character mainCharacter;
    gameWorld.setMainCharacter(mainCharacter);
    int hp;
    hp = mainCharacter.getHealthPoints();
    std::cout << hp;

    return 0;

}