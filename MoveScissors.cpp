#include "MoveScissors.h"

MoveScissors::MoveScissors(){
    move = "Scissors";
    win = {"Paper"};
}

std::unordered_set<std::string> MoveScissors::getWin(){
    return win;
}

std::string MoveScissors::getName(){
    return move;
}