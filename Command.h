//
// Created by Jeremy Eiser Herczeg on 2/8/24.
//

#ifndef ZOMBIELIFE2_COMMAND_H
#define ZOMBIELIFE2_COMMAND_H
#include <iostream>

struct Command {
    std::string keyword;
    std::function<void()> function;

    Command(const std::string& key, const std::function<void()>& func)
            : keyword(key), function(func) {}
};


#endif //ZOMBIELIFE2_COMMAND_H
