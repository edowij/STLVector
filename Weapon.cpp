//
// Created by Edoardo Wijaya Grappolini on 20/05/21.
//

#include "Weapon.h"


#include "Weapon.h"

Weapon::Weapon(int s, bool m) : strenght(s), magic(m) {
}

Weapon::~Weapon() {
}

bool Weapon::isMagic() const {
    return magic;
}

void Weapon::setMagic(bool magic) {
    this->magic = magic;
}

int Weapon::getStrenght() const {
    return strenght;
}

void Weapon::setStrenght(int strenght) {
    this->strenght = strenght;
}
