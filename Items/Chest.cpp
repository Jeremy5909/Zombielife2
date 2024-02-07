//
// Created by Jeremy Eiser Herczeg on 2/6/24.
//

#include "Chest.h"
#include <iostream>

Chest::Chest(const std::string& name) : Item(name) {}

void Chest::ListInventory() {
    for(const auto& item: inventory) {
        std::cout << "- " << item.getName();
    }
}