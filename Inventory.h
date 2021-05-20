//
// Created by Edoardo Wijaya Grappolini on 20/05/21.
//

#ifndef STL_VECTOR_INVENTORY_H
#define STL_VECTOR_INVENTORY_H


#include "Weapon.h"

class Inventory {
public:
    Inventory();
    virtual ~Inventory(); // TODO implement

    void addWeapon(Weapon* w); // TODO implement
    void removeWeapon(int i); // TODO implement
    Weapon* getWeapon(int i); // TODO implement
    int useWeapon(int i); // TODO implement

    int getNumWeapons(); // TODO implement

private:
    // TODO add STL vector to hold the weapons
};



#endif //STL_VECTOR_INVENTORY_H
