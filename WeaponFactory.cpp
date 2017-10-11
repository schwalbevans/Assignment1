/* 
 * File:   WeaponFactory.cpp
 * Author: Javier <jrescobara@gmail.com>cd 
 *  
 */ 

#include <string>
#include <stddef.h> 
#include "WeaponFactory.h"
#include "CommonSword.h" 
#include "CommonSpear.h"
#include "SimpleAxe.h"
#include "CrazyRandomSword.h"
#include "SamuraiSword.h"
WeaponFactory* WeaponFactory::instance = NULL;

WeaponFactory * WeaponFactory::getInstance() {
    if (!instance) {
        instance = new WeaponFactory();
    }
    return instance;
}

Weapon * WeaponFactory::getWeapon(std::string name) {
    if (name.compare("sword") == 0) {
        return new CommonSword();
    }
    
    if (name.compare("spear") == 0) {
        return new CommonSpear();
    }
    if(name.compare("axe") == 0)
    { 
        return new SimpleAxe(); 

    }
    if(name.compare("crazyrandomsword") == 0)
    { 
        srand(time(NULL)); 
        return new CrazyRandomSword(); 

    }
    if(name.compare("samuraisword") == 0)
    { 
        return new SamuraiSword(); 

    }
    throw "Invalid weapon";
}