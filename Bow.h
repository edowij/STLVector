//
// Created by Edoardo Wijaya Grappolini on 20/05/21.
//

#ifndef STL_VECTOR_BOW_H
#define STL_VECTOR_BOW_H


#include "Weapon.h"

class Bow : public Weapon {
public:
    Bow(int s=12, bool m = false, int a = 20);
    virtual ~Bow();

    virtual int useWeapon();

private:
    int arrows;
};


#endif //STL_VECTOR_BOW_H
