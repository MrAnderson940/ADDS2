#ifndef MOVENINJA_H
#define MOVENINJA_H
#include "Move.h"

class MoveNinja : public Move{
    public:
    MoveNinja();
    std::string getName();
    std::unordered_set<std::string> getWin();
};

#endif
