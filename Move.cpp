#include "Move.h"

Move::Move(std::string name) : name(name) {}

std::string Move::getName() {return name;}

Monkey::Monkey(std::string name) : Move(name) {}

Move* Monkey::compareGame(Move* computer, Move* human) {

    if(human->getName() == "Ninja" || human->getName() == "Robot") {
        return computer;
    }
    else if(human->getName() == "Pirate" || human->getName() == "Zombie") {
        return human;
    }

    return nullptr;

}

Robot::Robot(std::string name) : Move(name) {}

Move* Robot::compareGame(Move* computer, Move* human) {

    if(human->getName() == "Ninja" || human->getName() == "Zombie") {
        return computer;
    }
    else if(human->getName() == "Pirate" || human->getName() == "Monkey") {
        return human;
    }

    return nullptr;
}

Pirate::Pirate(std::string name) : Move(name) {}

Move* Pirate::compareGame(Move* computer, Move* human) {

    if(human->getName() == "Robot" || human->getName() == "Monkey") {
        return computer;
    }
    else if(human->getName() == "Ninja" || human->getName() == "Zombie") {
        return human;
    }

    return nullptr;
}

Ninja::Ninja(std::string name) : Move(name) {}

Move* Ninja::compareGame(Move* computer, Move* human) {

    if(human->getName() == "Pirate" || human->getName() == "Zombie") {
        return computer;
    }
    else if(human->getName() == "Monkey" || human->getName() == "Robot") {
        return human;
    }

    return nullptr;
}

Zombie::Zombie(std::string name) : Move(name) {}

Move* Zombie::compareGame(Move* computer, Move* human) {

    if(human->getName() == "Pirate" || human->getName() == "Monkey") {
        return computer;
    } 
    else if(human->getName() == "Robot" || human->getName() == "Ninja") {
        return human;
    }

    return nullptr;
}
