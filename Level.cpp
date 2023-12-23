#include "Level.h"

Level::Level(int curExperience, int experienceThreshold){

    this->curExperience = curExperience;
    this->experienceThreshold = experienceThreshold;

}

Level::Level(){

    curExperience = 0;
    experienceThreshold = 100;
    
}