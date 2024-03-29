//
// Created by Jeremy Eiser Herczeg on 2/6/24.
//

#ifndef ZOMBIELIFE2_CHEST_H
#define ZOMBIELIFE2_CHEST_H

#include "Item.h"
#include <iostream>
#include "../Living/Player.h"

class Chest : public Item {
private:
    std::vector<Item> inventory;
public:
    explicit Chest(const std::string &name);
    void ListInventory();
    void open(Player& player);
};


#endif //ZOMBIELIFE2_CHEST_H
