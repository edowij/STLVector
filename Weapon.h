//
// Created by Edoardo Wijaya Grappolini on 20/05/21.
//

#ifndef STL_VECTOR_WEAPON_H
#define STL_VECTOR_WEAPON_H


class Weapon {
public:
    Weapon(int s=6, bool m=false);
    virtual ~Weapon();

    virtual int useWeapon() = 0;

    bool isMagic() const;
    void setMagic(bool magic);
    int getStrenght() const;
    void setStrenght(int strenght);

protected:
    int strenght;
    bool magic;
};


#endif //STL_VECTOR_WEAPON_H
