#include "gameStart.h"

void gameStart(){

    Character player;
    std::cout << "game is starting" << std::endl;
    gameFlow(player); // creates a player with default stats: name:Default, hp:10, strength:1, defense:1

}