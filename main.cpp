#include <iostream>
#include "Items/Item.h"
#include "Items/Chest.h"

// Player stuff

std::string playerName;
std::vector<Item> playerInventory;

void StumbleUponItem(const Item& item) {
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

// Game stuff

void Intro() {
    std::cout << "You wake up, feeling horrible. All you want is brains. " << std::endl <<
                 "You can barely think of what you're name is and remember that it is: ";

    // Get player name
    std::cin >> playerName;
    std::cout << std::endl;

    Chest StarterChest("chest");
    StumbleUponItem(StarterChest);
}

void GameLoop() {
    std::string input;
    std::cout << "> " ; std::cin >> input;
}

int main() {
    Intro();
    GameLoop();

    return 0;
}
