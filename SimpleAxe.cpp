/* 
 * File:   SimpleAxe.cpp
 * Author: Evan <evanschwalb@gmail.com>
 *
 * Created on October 9th, 2017, 1:57 PM
 */

#include "SimpleAxe.h"
#include <iostream> 
using namespace std; 


double SimpleAxe::hit(double armor) {
    double damage; 
    if (armor > 0 && armor < 20)
    { 
      damage = hitPoints; 
    }
    else if (armor >= 20) { 
        damage = hitPoints - armor;   
    } 
    if (damage < 0) {
        return 0;
    }
    return damage;
}