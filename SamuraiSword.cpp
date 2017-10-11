/* 
 * File:   SamuraiSword.cpp
 * Author: Evan <evanschwalb@gmail.com>
 *
 * Created on October 10th, 2017, 8:02 PM
 */

#include "SamuraiSword.h"


double SamuraiSword::hit(double armor) {
    double damage; 
    if (armor > 0 && armor < 20)
    { 
      damage = hitPoints; 
    }
    else if (armor >= 20 && armor < 30) { 
        damage = hitPoints - armor;   
    } 
    else if (armor > 30){ 
        damage = 0; 
    }
    if (damage < 0) {
        return 0;
    }
    return damage;
}