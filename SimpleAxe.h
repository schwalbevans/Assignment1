/* 
 * File:   SimpleAxe.h
 * Author: Evan <evanschwalb@gmail.com> 
 *
 * Created on October 9th, 2017, 1:40 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

/**
 * Defines the behavior of a simple axe(hitpoint = 60, ignores if armor
 * is greater then 0, but less then 20 
 * )
 */
class SimpleAxe : public Weapon {
public:

    SimpleAxe() : Weapon("Simple Axe", 60.0) {
    }
    virtual ~SimpleAxe() {}; 
    virtual double hit(double armor);

};

#endif /*   SIMPLEAXE_H */