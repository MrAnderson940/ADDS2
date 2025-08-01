#include "Human.h"

Human::Human(){
    name = "Human";
}

Human::Human(std::string n){
    name = n;
}

char Human::makeMove(){
    char move;
    std::cout << "Enter move: ";
    std::cin >> move;
    return move;
}