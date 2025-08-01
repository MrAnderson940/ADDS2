#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

class Player{
    protected:
    Player();
    std::string name;
    public:
    virtual char makeMove() {return 0;};
    std::string getName();
};

#endif