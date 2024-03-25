#include "Referee.h"
#include <string>
#include <iostream>

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {

    char player1Move = player1->makeMove();
    char player2Move = player2->makeMove();


    if (player1Move == 'p' && player2Move == 'r') {
        return player1;
    }
    else if (player1Move == 'p' && player2Move == 's') {
        return player2;
    }
    else if (player1Move == 's' && player2Move == 'p') {
        return player1;
    }
    else if (player1Move == 's' && player2Move == 'r') {
        return player2;
    }
    else if (player1Move == 'r' && player2Move == 's') {
        return player1;
    }
    else if (player1Move == 'r' && player2Move == 'p') {
        return player2;
    }


    return nullptr;
}