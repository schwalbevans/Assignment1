/* 
 * File:   CrazyRandomSword.h
 * Author: Evan <evanschwalb@gmail.com> 
 *
 * Created on October 10th, 2017, 9:50 AM
 */

#include <string>
#include <cstdlib> 
#include <math.h>
#include <time.h> 
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a crazyrandomsword(hitpoint =random number between 10 to 100 
 * , ignores random amount of damage depending on the armor
 * 
 * )
 */
class CrazyRandomSword : public Weapon {
public:
    CrazyRandomSword() : Weapon("Crazy Random Sword", (rand() % 90 + 10)) {
        srand(time(NULL)); 
    }
    virtual ~CrazyRandomSword() {}; 
    virtual double hit(double armor);

};

#endif