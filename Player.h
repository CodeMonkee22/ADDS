#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Move.h"

class Player {
    protected:
    std::string name;
    Move* move;

    public:
    Player(std::string name);
    Move* getMove();
    virtual Move* makeMove() = 0;
    std::string getName();
    virtual ~Player();

};

#endif