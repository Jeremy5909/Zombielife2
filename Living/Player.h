//
// Created by Jeremy Eiser Herczeg on 2/6/24.
//

#ifndef ZOMBIELIFE2_PLAYER_H
#define ZOMBIELIFE2_PLAYER_H

#include <iostream>
#include "../Items/Item.h"
#include "Zombie.h"

class Player : public Zombie {
private:
    std::string pName;
public:
    std::vector<Item> inventory;

    void setName(const std::string& name);
    std::string getName();

    void StumbleUponItem(const Item& item);
};


#endif //ZOMBIELIFE2_PLAYER_H
