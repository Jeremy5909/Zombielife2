cmake_minimum_required(VERSION 3.27)
project(zombielife2)

set(CMAKE_CXX_STANDARD 17)

add_executable(zombielife2 main.cpp
        Items/Item.cpp
        Items/Item.h
        Living/Living.cpp
        Living/Living.h
        Living/Zombie.cpp
        Living/Zombie.h
        Living/Player.cpp
        Living/Player.h
        Items/Weapon.cpp
        Items/Weapon.h
        Items/Chest.cpp
        Items/Chest.h
)
