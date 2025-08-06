#include "Referee.h"

Player* Referee::refGame(Player* player1, Player* player2){
    player1->makeMove();
    player2->makeMove();
    if (player1->getMove() == player2->getMove()){
        return nullptr;
    } else if (player1->getWinWith().find(player2->getMove()) != player1->getWinWith().end()){
        return player1;
    } else {
        return player2;
    }
} 