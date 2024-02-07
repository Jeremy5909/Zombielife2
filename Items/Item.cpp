//
// Created by Jeremy Eiser Herczeg on 2/6/24.
//

#include "Item.h"

std::string Item::getName() const {
    return pName;
}

Item::Item(std::string name) {
    pName = name;
}

