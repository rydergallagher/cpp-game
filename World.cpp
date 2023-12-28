#include "World.h"

World::World(){

    std::cout << "World created" << std::endl;

}

void World::createMainCharacter(){

    std::string name;
    std::cout << "What is your name: ";
    std::cin >> name;
    std::cout << std::endl;
    mainCharacter.setName(name);
    mainCharacter.setHealthPoints(20);
    mainCharacter.setAttackPoints(10);

}