#include "Referee.h"
#include <string>
#include <iostream>

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {

    char player1Move = player1->makeMove();
    char player2Move = player2->makeMove();

    if (player1Move == 'P' && player2Move == 'R') { 
        return player1;
    }
    else if (player1Move == 'P' && player2Move == 'S') {
        return player2;
    }
    else if (player1Move == 'S' && player2Move == 'P') {
        return player1;
    }
    else if (player1Move == 'S' && player2Move == 'R') {
        return player2;
    }
    else if (player1Move == 'R' && player2Move == 'S') {
        return player1;
    }
    else if (player1Move == 'R' && player2Move == 'P') {
        return player2;
    }


    return nullptr;
}