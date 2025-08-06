#include "MoveNinja.h"

MoveNinja::MoveNinja(){
    move = "Ninja";
    win = {"Pirate", "Zombie"};
}

std::unordered_set<std::string> MoveNinja::getWin(){
    return win;
}

std::string MoveNinja::getName(){
    return move;
}