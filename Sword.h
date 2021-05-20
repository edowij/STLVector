//
// Created by Edoardo Wijaya Grappolini on 20/05/21.
//

#ifndef STL_VECTOR_SWORD_H
#define STL_VECTOR_SWORD_H


#include "Weapon.h"

class Sword : public Weapon{
public:
    Sword(int s=10, bool m=false);
    virtual ~Sword();

    virtual int useWeapon();
};


#endif //STL_VECTOR_SWORD_H
