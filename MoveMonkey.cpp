#include "MoveMonkey.h"

MoveMonkey::MoveMonkey(){
    move = "Monkey";
    win = {"Ninja", "Robot"};
}

std::unordered_set<std::string> MoveMonkey::getWin(){
    return win;
}

std::string MoveMonkey::getName(){
    return move;
}