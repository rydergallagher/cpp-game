#include "Character.h"

Character::Character(std::string name, int healthPoints, int strength, int defense){

    this->name = name;
    this->healthPoints = healthPoints;
    this->strength = strength;
    this->defense = defense;

}

Character::Character(){

    name = "Default";
    healthPoints = 10;
    strength = 5;
    defense = 5;

}

int Character::calculateDamage(int attackerStrength, int attackeeDefense){

    

}

std::string Character::getName(){

    return this->name;

}

void Character::setName(std::string name){

    this->name = name;

}

int Character::getHealthPoints(){

    return this->healthPoints;

}

void Character::setHealthPoints(int healthPoints){

    this->healthPoints = healthPoints;

}

int Character::getStrength(){

    return this->strength;

}

void Character::setStrength(int strength){

    this->strength = strength;

}

int Character::getDefense(){

    return this->defense;

}

void Character::setDefense(int defense){

    this->defense = defense;

}