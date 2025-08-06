#ifndef MOVE_H
#define MOVE_H
#include <iostream>
#include <unordered_set>

class Move{
    protected:
    std::string move;
    std::unordered_set<std::string> win;

    public:
    virtual std::string getName(){return 0;};
    virtual std::unordered_set<std::string> getWin() = 0;
};

#endif