#include "Character.h"

Character::Character(std::string name, int hp, int strength, int defense){

    this->name = name;
    this->hp = hp;
    this->strength = strength;
    this->defense = defense;
    
}

Character::Character(){

    // don't need to use this keyword because nothing is passed into the function
    name = "Default";
    hp = 10;
    strength = 3;
    defense = 1;
    
}

void Character::setName(std::string name){

    this->name = name;

}

std::string Character::getName(){

    return this-> name;

}

void Character::setHp(int hp){

    this->hp = hp;

}

int Character::getHp(){

    return this-> hp;

}