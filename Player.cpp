#include "Player.h"

Player::Player(){
    
}

std::string Player::getMove(){
    return move->getName();
}


std::string Player::getName(){
    return name;
}

std::unordered_set<std::string> Player::getWinWith(){
    return move->getWin();
}