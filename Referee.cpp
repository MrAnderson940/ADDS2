#include "Referee.h"

Referee::Referee(){}

Player* Referee::refGame(Player* player1, Player* player2){
    char m1, m2;
    m1 = player1->makeMove();
    m2 = player2->makeMove();
    if (m1 == m2){
        std::cout << "It's a Tie";
        return nullptr;
    } else if ((m1 == 'R' && m2 == 'S') || (m1 == 'P' && m2 == 'R') || (m1 == 'S' && m2 == 'P')){
        std::cout << player1->getName() << " Wins";
        return player1;
    } else{
        std::cout << player2->getName() << " Wins";
        return player2;
    }
}