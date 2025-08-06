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
    Computer c1;
    Human p1("Owen");
    Referee r1;
    r1.refGame(&p1,&c1);
    return 0;
}