#include "gameStart.h"

void gameStart(){

    Character player("default", 10, 10, 10);
    std::cout << "game is starting" << std::endl;
    gameFlow();

}