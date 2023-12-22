#include "Character.h"

Character::Character(std::string name, int hp, int strength, int defense){

    name = name;
    hp = hp;
    strength = strength;
    defense = defense;
    
}

void Character::setName(std::string name){

    this->name = name;
    
}