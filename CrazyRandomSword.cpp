/* 
 * File:   CrazyRandomSword.cpp
 * Author: Evan <evanschwalb@gmail.com>
 *  
 */

#include "CrazyRandomSword.h"


double CrazyRandomSword::hit(double armor){
    int halfarmor = armor/2; 
    double damage = hitPoints - (rand() % halfarmor);
    srand(time(NULL)); 
    if(damage < 0){
        return 0;
    }
    return damage;
}