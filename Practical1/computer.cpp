#include "computer.h"

Computer::Computer() : Player("Computer") {
}

char Computer::makeMove() {
    return 'r';
}