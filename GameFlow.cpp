#include "GameFlow.h"

GameFlow::GameFlow(){

    std::cout << "Created GameFlow" << std::endl;
    sectionOne();

}

void playerTurn(){

    int choice;

    std::cout << "[1]   Attack" << std::endl;
    std::cout << "[2]   Defend" << std::endl;
    std::cout << "[3]   Use Item" << std::endl;

    std::cin >> choice;
    std::cout << std::endl;

    switch(choice){

        case 1:

            std::cout << "Player attacks" << std::endl;
            break;

        case 2:

            std::cout << "Player defends" << std::endl;
            break;

        case 3:

            std::cout << "Player uses an item" << std::endl;
            break;
            
    }

}

void GameFlow::combat(){

    

}

void GameFlow::sectionOne(){

    std::cout << "Game is starting" << std::endl;

    gameWorld.createEnemy("Goblin", 10, 10);

}