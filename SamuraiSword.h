/* 
 * File:   SamuraiSword.h
 * Author: Evan <evanschwalb@gmail.com> 
 *
 * Created on October 10th, 2017, 7:55 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SAMURAISWORD_H
#define SAMURAISWORD_H

/**
 * Defines the behavior of a Samurai Sword(hitpoint = 40, ignores armor if less then 20 
 * and produces no damage if armor is greater then 70 
 * 
 * )
 */
class SamuraiSword : public Weapon {
public:

    SamuraiSword() : Weapon("Samurai Sword", 40.0) {
    }
    virtual ~SamuraiSword() {}; 
    virtual double hit(double armor);

};

#endif /*   SAMURAISWORD_H */