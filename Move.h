#ifndef MOVE_H
#define MOVE_H
#include <string>


class Move {
    protected:
    std::string name;
    public:
    Move(std::string name);
    virtual Move* compareGame(Move* computer, Move* human) = 0;
    std::string getName();

};

class Monkey : public Move {
    public:
    Monkey(std::string name);
    Move* compareGame(Move* computer, Move* human);
};

class Robot : public Move {
    public:
    Robot(std::string name);
    Move* compareGame(Move* itself, Move* human);

};

class Pirate : public Move {
    public:
    Pirate(std::string name);
    Move* compareGame(Move* itself, Move* human);
};

class Ninja : public Move {
    public:
    Ninja(std::string name);
    Move* compareGame(Move* itself, Move* human);
};

class Zombie : public Move {
    public:
    Zombie(std::string name);
    Move* compareGame(Move* itself, Move* human);
};

#endif