#include "GameFlow.h"

GameFlow::GameFlow(){

    std::cout << "Created GameFlow" << std::endl;
    sectionOne();

}

void GameFlow::sectionOne(){

    std::cout << "Game is starting" << std::endl;

    gameWorld.createEnemy("Goblin", 10, 10, 10);
    gameWorld.combat();

}