#include "Computer.h"
#include "Move.h"
#include <string>

Computer::Computer() : Player("Computer") {}

Computer::Computer(std::string name) : Player(name) {}

Move* Computer::makeMove() {

    Move* character = new Rock("Rock");
    move = character;
    return character;
}