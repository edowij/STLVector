//
//
//


#include "Bow.h"

Bow::Bow(int s, bool m, int a) : Weapon(s,m), arrows(a) {
}

Bow::~Bow() {
}

int Bow::useWeapon() {
    if (arrows == 0)
        return 0;
    int damage = strenght;
    if (magic)
        damage = 2 * strenght;
    arrows--;
    return damage;
}