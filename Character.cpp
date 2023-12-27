#include "Character.h"

Character::Character(std::string name, int healthPoints, int attackPoints){

    this->name = name;
    this->healthPoints = healthPoints;
    this->attackPoints = attackPoints;

}

Character::Character(){

    name = "Default";
    healthPoints = 10;
    attackPoints = 10;

}

std::string Character::getName(){

    return this->name;

}

void Character::setName(std::string name){

    this->name = name;

}