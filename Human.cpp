#include "Human.h"
#include "TheMover.h"

Human::Human(){
    name = "Player";
}

Human::Human(std::string n){
    name = n;
}

Move* Human::makeMove(){
    std::string m;
    //std::cout << "Enter Move: ";
    std::cin >> m;
    TheMover mover;
    move = mover.theMove(m);
    return move;
}

Human::~Human(){
    delete[] move;
}