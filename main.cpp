#include <iostream>
#include "Living/Player.h"
#include "Items/Item.h"
#include "Items/Chest.h"

void Intro(Player player) {
    std::cout << "You wake up, feeling horrible. All you want is brains. " << std::endl <<
                 "You can barely think of what you're name is and remember that it is: ";
    std::string tempName; std::cin >> tempName; player.setName(tempName);

    Chest StarterChest("chest");
    player.StumbleUponItem(StarterChest);
}

int main() {
    Player player;

    Intro(player);

    return 0;
}
