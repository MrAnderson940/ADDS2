#ifndef MOVEROBOT_H
#define MOVEROBOT_H
#include "Move.h"

class MoveRobot : public Move{
    public:
    MoveRobot();
    std::string getName();
    std::unordered_set<std::string> getWin();
};

#endif