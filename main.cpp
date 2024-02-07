#include <iostream>
#include "Living/Player.h"
#include "Items/Item.h"
#include "Items/Chest.h"

void Intro(Player& player) {
    std::cout << "You wake up, feeling horrible. All you want is brains. " << std::endl <<
                 "You can barely think of what you're name is and remember that it is: ";

    // Get input and set player name
    std::string tempName; std::cin >> tempName; player.setName(tempName) ; std::cout << std::endl;

    Chest StarterChest("chest");
    player.StumbleUponItem(StarterChest);
}

void GameLoop(Player& player) {
    std::string input;
    std::cout << "> " ; std::cin >> input;


}

int main() {
    Player player;
    Intro(player);
    GameLoop(player);

    return 0;
}
