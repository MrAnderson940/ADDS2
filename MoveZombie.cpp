#include "MoveZombie.h"

MoveZombie::MoveZombie(){
    move = "Zombie";
    win = {"Pirate","Monkey"};
}

std::unordered_set<std::string> MoveZombie::getWin(){
    return win;
}

std::string MoveZombie::getName(){
    return move;
}