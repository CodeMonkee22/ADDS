#include "referee.h"
#include <string>
#include <iostream>

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {

    player1->makeMove();
    char playerMove = player2->makeMove();

    cout << player2->getName() << endl; 

    if (playerMove == 'p') {
        return player2;
    }
    else if (playerMove == 's') {
        return player1;
    }
    return nullptr;
}