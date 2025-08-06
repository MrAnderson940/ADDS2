#include "MoveRobot.h"

MoveRobot::MoveRobot(){
    move = "Robot";
    win = {"Ninja","Zombie"};
}

std::unordered_set<std::string> MoveRobot::getWin(){
    return win;
}

std::string MoveRobot::getName(){
    return move;
}