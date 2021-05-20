cmake_minimum_required(VERSION 3.19)
project(STL_vector)

set(CMAKE_CXX_STANDARD 14)

add_executable(STL_vector main.cpp Bow.cpp Bow.h Inventory.cpp Inventory.h Sword.cpp Sword.h Weapon.cpp Weapon.h)