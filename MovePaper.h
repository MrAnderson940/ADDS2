#ifndef MOVEPAPER_H
#define MOVEPAPER_H
#include "Move.h"

class MovePaper : public Move{
    public:
    MovePaper();
    std::string getName();
    std::unordered_set<std::string> getWin();
};

#endif