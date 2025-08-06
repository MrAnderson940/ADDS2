#include "MovePirate.h"

MovePirate::MovePirate(){
    move = "Pirate";
    win = {"Robot","Monkey"};
}

std::unordered_set<std::string> MovePirate::getWin(){
    return win;
}

std::string MovePirate::getName(){
    return move;
}