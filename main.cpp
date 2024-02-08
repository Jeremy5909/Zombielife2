#include <iostream>
#include "Items/Item.h"
#include "Items/Chest.h"
#include "Living/Player.h"

// Game stuff

void Intro(Player& player) {
    std::cout << "You wake up, feeling horrible. All you want is brains. " << std::endl <<
                 "You can barely think of what you're name is and remember that it is: ";

    // Get player name
    std::cin >> player.pName;
    std::cout << std::endl;

    Chest StarterChest("chest");
    player.StumbleUponItem(StarterChest);
}

void GameLoop(Player& player) {
    std::string input;
    std::cout << "> " ; std::cin >> input;

    player.handleCommand(input);
    player.com

    GameLoop(player);
}

int main() {
    Player player;
    Intro(player);
    GameLoop(player);

    return 0;
}
