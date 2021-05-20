//
// Created by Edoardo Wijaya Grappolini on 20/05/21.
//

#include "Sword.h"

#include "Sword.h"

Sword::Sword(int s, bool m) : Weapon(s, m) {

}

Sword::~Sword() {
}


int Sword::useWeapon() {
    int damage = strenght;
    if (magic)
        damage *= 2;
    return damage;
}
