#include "gameFlow.h"

void gameFlow(Character player){

    std::string playerName;
    std::cout << "Enter your name: ";
    std::cin >> playerName;
    player.setName(playerName);

}