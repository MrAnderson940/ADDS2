#ifndef MOVEROCK_H
#define MOVEROCK_H
#include "Move.h"

class MoveRock : public Move{
    public:
    MoveRock();
    std::string getName();
    std::unordered_set<std::string> getWin();
};

#endif