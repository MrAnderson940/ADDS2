#ifndef MOVEZOMBIE_H
#define MOVEZOMBIE_H
#include "Move.h"

class MoveZombie : public Move{
    public:
    MoveZombie();
    std::string getName();
    std::unordered_set<std::string> getWin();
};

#endif