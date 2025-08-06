#include "MoveRock.h"

MoveRock::MoveRock(){
    move = "Rock";
    win = {"Scissors"};
}

std::unordered_set<std::string> MoveRock::getWin(){
    return win;
}

std::string MoveRock::getName(){
    return move;
}