#ifndef MOVEPIRATE_H
#define MOVEPIRATE_H
#include "Move.h"

class MovePirate : public Move{
    public:
    MovePirate();
    std::string getName();
    std::unordered_set<std::string> getWin();
};

#endif