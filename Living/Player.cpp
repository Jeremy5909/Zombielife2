//
// Created by Jeremy Eiser Herczeg on 2/6/24.
//

#include "Player.h"

void Player::setName(std::string name) {
    pName = name;
}

std::string Player::getName() {
    return pName;
}

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
}