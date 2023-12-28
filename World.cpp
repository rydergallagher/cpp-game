#include "World.h"

World::World(){
    
}

Character World::getMainCharacter(){

    return this->mainCharacter;

}

void World::setMainCharacter(Character mainCharacter){

    this->mainCharacter = mainCharacter;

}