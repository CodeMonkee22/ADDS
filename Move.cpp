#include "Move.h"

Move::Move(std::string name) : name(name) {}

std::string Move::getName() {return name;}

Rock::Rock(std::string name) : Move(name) {}

Move* Rock::compareGame(Move* computer, Move* human) {
    if (human->getName() == "Scissors") {
        return computer;
    }
    else if(human->getName() == "Paper") {
        return human;
    }
    
    return nullptr;
}

Paper::Paper(std::string name) : Move(name) {}

Move* Paper::compareGame(Move* computer, Move* human) {
    if (human->getName() == "Rock") {
        return computer;
    }
    else if(human->getName() == "Scissors") {
        return human;
    }

    return nullptr;
}

Scissors::Scissors(std::string name) : Move(name) {}

Move* Scissors::compareGame(Move* computer, Move* human) {
    if (human->getName() == "Paper") {
        return computer;
    }
    else if(human->getName() == "Rock") {
        return human;
    }

    return nullptr;
}

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
