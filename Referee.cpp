#include "Player.h"
#include "Referee.h"
#include "Human.h"

Referee::Referee() {}

Player* Referee::refGame(Player* computer, Player* human) {

    Move* computerMove = computer->makeMove();
    Move* humanMove =  human->makeMove();

    if(computerMove == nullptr || humanMove == nullptr) {
        return nullptr;
    }

    Move* winnerMove = computerMove->compareGame(computerMove, humanMove);

    if(winnerMove != nullptr) {
      if (winnerMove->getName() == computerMove->getName()) {
        return computer;
        }
      else if(winnerMove != nullptr && winnerMove->getName() == humanMove->getName()) {
        return human;
        }
    }

    return nullptr;
}