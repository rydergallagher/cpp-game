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
        std::cout << "Strength: " << enemyVector[i].getStrength() << std::endl;
        std::cout << "Defense: " << enemyVector[i].getDefense() << std::endl;

    }
    
}

int World::calculateDamage(int attackerStrength, int attackeeDefense){

    return attackerStrength - attackeeDefense;

}

void World::playerTurn(Character enemy){

    int choice;
    int damage;
    int enemyHP;

    std::cout << "[1]   Attack" << std::endl;
    std::cout << "[2]   Defend" << std::endl;
    std::cout << "[3]   Use Item" << std::endl;

    std::cin >> choice;
    std::cout << std::endl;

    switch(choice){

        case 1:

            std::cout << "Player attacks" << std::endl;
            enemyHP = enemy.getHealthPoints();
            damage = calculateDamage(mainCharacter.getStrength(), enemy.getDefense());
            enemyHP -= damage;
            std::cout << damage << " damage dealt to " << enemy.getName();
            break;

        case 2:

            std::cout << "Player defends" << std::endl;
            break;

        case 3:

            std::cout << "Player uses an item" << std::endl;
            break;
            
    }

}

void World::combat(){

    playerTurn(enemyVector.back()); // end of vector

}