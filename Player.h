#ifndef PLAYER_H
#define PLAYER_H
#include "Move.h"

class Player{
    protected:
    std::string name;
    Move* move;
    public:
    Player();
    virtual Move* makeMove()=0;
    std::string getMove();
    std::string getName();
    std::unordered_set<std::string> getWinWith();
};

#endif