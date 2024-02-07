//
// Created by Jeremy Eiser Herczeg on 2/6/24.
//

#ifndef ZOMBIELIFE2_CHEST_H
#define ZOMBIELIFE2_CHEST_H

#include <vector>
#include "Item.h"

class Chest : public Item {
private:
    std::vector<Item> inventory;
public:
    Chest(const std::string &name);
};


#endif //ZOMBIELIFE2_CHEST_H
