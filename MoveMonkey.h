#ifndef MOVEMONKEY_H
#define MOVEMONKEY_H
#include "Move.h"

class MoveMonkey : public Move{
    public:
    MoveMonkey();
    std::string getName();
    std::unordered_set<std::string> getWin();
};

#endif