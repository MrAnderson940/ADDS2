#ifndef MOVESCISSORS_H
#define MOVESCISSORS_H
#include "Move.h"

class MoveScissors : public Move{
    public:
    MoveScissors();
    std::string getName();
    std::unordered_set<std::string> getWin();
};

#endif