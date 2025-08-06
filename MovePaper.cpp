#include "MovePaper.h"

MovePaper::MovePaper(){
    move = "Paper";
    win = {"Rock"};
}

std::unordered_set<std::string> MovePaper::getWin(){
    return win;
}

std::string MovePaper::getName(){
    return move;
}