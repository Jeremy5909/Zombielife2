//
// Created by Jeremy Eiser Herczeg on 2/7/24.
//

#include "Player.h"

void Player::StumbleUponItem(const Item& item) {
    std::string vowels = "aeiouAEIOU";

    if(vowels.find(item.getName()[0]) == std::string::npos) {
        // Name starts with constant
        std::cout << "You stumble upon a ";
    } else {
        // Name starts with vowel
        std::cout << "You stumble upon an ";
    }
    std::cout << item.getName() << "." << std::endl;
};

void Player::handleCommand(const Command& command) {
    auto it = commands.find(command);
    if (it != commands.end()) {
        // Execute the associated function for the command
        it->second.function();
    } else {
        std::cout << "Unknown command: " << command << std::endl;
    }
}

void Player::addCommand(const Command& command) {
    commands["a"] = command;
}

