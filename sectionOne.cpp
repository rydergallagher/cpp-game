#include "EventHandler.h"

void sectionOne(Character mainCharacter()){

    std::string tempName;
    std::cout << "Enter your name: ";
    std::cin >> tempName;
    mainCharacter.setName(tempName);

}