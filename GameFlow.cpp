#include "GameFlow.h"

GameFlow::GameFlow(){

    std::cout << "Created GameFlow" << std::endl;
    sectionOne();

}

int displayCombatMenu(){

    int choice;
    
    std::cout << "[1]   Attack" << std::endl;
    std::cout << "[2]   Defend" << std::endl;
    std::cout << "[3]   Use Item" << std::endl;

    std::cin >> choice;
    std::cout << std::endl;

    return choice;

}

void GameFlow::combat(){

    
}

void GameFlow::sectionOne(){

    std::cout << "Game is starting" << std::endl;

    gameWorld.createEnemy("Goblin", 10, 10);

}