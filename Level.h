#ifndef LEVEL_H
#define LEVEL_H

#include "main.h"

class Level{

    private:

        int curExperience;
        int experienceThreshold;
        
    public:

        Level(int curExperience, int experienceThreshold); // constructor
        Level(); // default constructor

};

#endif