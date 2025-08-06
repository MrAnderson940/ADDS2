#include "TheMover.h"
#include <unordered_map>
#include "MoveMonkey.h"
#include "MoveNinja.h"
#include "MovePaper.h"
#include "MovePirate.h"
#include "MoveRobot.h"
#include "MoveRock.h"
#include "MoveScissors.h"
#include "MoveZombie.h"


Move* TheMover::theMove(std::string move){
    std::unordered_map<std::string, Move*> position;
    position["Monkey"] = new MoveMonkey;
    position["Ninja"] = new MoveNinja;
    position["Paper"] = new MovePaper;
    position["Pirate"] = new MovePirate;
    position["Robot"] = new MoveRobot;
    position["Rock"] = new MoveRock;
    position["Scissors"] = new MoveScissors;
    position["Zombie"] = new MoveZombie;
    return position[move];
}