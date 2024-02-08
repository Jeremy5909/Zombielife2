//
// Created by Jeremy Eiser Herczeg on 2/7/24.
//

#ifndef ZOMBIELIFE2_PLAYER_H
#define ZOMBIELIFE2_PLAYER_H

#include <string>
#include <iostream>
#include <unordered_map>
#include "../Items/Item.h"
#include "../Command.h"

class Player {
    std::unordered_map<std::string, Command> commands;
public:
    std::string name;
    std::vector<Item> inventory;

    static void StumbleUponItem(const Item& item);

    void handleCommand(const Command& command);
    void addCommand(const Command& command);
};


#endif //ZOMBIELIFE2_PLAYER_H
