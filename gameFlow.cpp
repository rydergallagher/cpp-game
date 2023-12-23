#include "gameFlow.h"

void gameFlow(Character player){

    std::string playerName;
    std::cout << "Enter your name: ";
    std::cin >> playerName;
    player.setName(playerName);

    Character enemyOne("Goblin", 3, 11, 1);
    std::cout << "you encounter a Goblin, and it looks ready to fight!" << std::endl;
    fight(player, enemyOne);

}