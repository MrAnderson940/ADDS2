#include "Computer.h"
#include "Human.h"
#include "MoveMonkey.h"
#include "MoveNinja.h"
#include "MovePaper.h"
#include "MovePirate.h"
#include "MoveRobot.h"
#include "MoveRock.h"
#include "MoveScissors.h"
#include "MoveZombie.h"
#include "Referee.h"
#include "TheMover.h"

int main(){
    Computer c1, c2, c3, c4;
    Human p1, p2, p3, p4;
    Player* win;
    Referee r1;
    win = r1.refGame(&c2,&c1);
    if (win == nullptr){
        std::cout << "Tie\n";
    } else{
        std::cout << win->getName() << std::endl;
    }
    win = r1.refGame(&p1,&p2);
    if (win == nullptr){
        std::cout << "Tie\n";
    } else{
        std::cout << win->getName() << std::endl;
    }
    win = r1.refGame(&p3,&c3);
    if (win == nullptr){
        std::cout << "Tie\n";
    } else{
        std::cout << win->getName() << std::endl;
    }
    win = r1.refGame(&p4,&c4);
    if (win == nullptr){
        std::cout << "Tie\n";
    } else{
        std::cout << win->getName() << std::endl;
    }
    return 0;
}