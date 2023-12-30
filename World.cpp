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
    mainCharacter.setStrength(10);
    mainCharacter.setDefense(10);

}

void World::createEnemy(std::string name, int hp, int strength, int defense){

    Character enemy(name, hp, strength, defense);
    enemyVector.push_back(enemy);

}

void World::displayEnemies(){

    for(size_t i = 0; i < enemyVector.size(); i++){

        std::cout << "Enemy " << i + 1 << ": " << std::endl;
        std::cout << "Name: " << enemyVector[i].getName() << std::endl;
        std::cout << "HP: " << enemyVector[i].getHealthPoints() << std::endl;
        std::cout << "AP: " << enemyVector[i].getStrength() << std::endl;
        std::cout << "AP: " << enemyVector[i].getDefense() << std::endl;

    }
    
}