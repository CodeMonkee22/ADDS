#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include "player.h"


class Human : public Player{
    private:
    string name;
    public:
    Human();
    Human(string name);
    char makeMove();

};


#endif