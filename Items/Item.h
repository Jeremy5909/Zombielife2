//
// Created by Jeremy Eiser Herczeg on 2/6/24.
//

#ifndef ZOMBIELIFE2_ITEM_H
#define ZOMBIELIFE2_ITEM_H

#include <string>

class Item {
private:
    std::string pName;
public:
    std::string getName() const;
    Item(std::string name);
};


#endif //ZOMBIELIFE2_ITEM_H
