#include "Computer.h"
#include "TheMover.h"

Computer::Computer(){
    name = "Computer";
}

Move* Computer::makeMove(){
    std::string m;
    m = "Rock";
    TheMover mover;
    move = mover.theMove(m);
    return move;
}

Computer::~Computer(){
    
}