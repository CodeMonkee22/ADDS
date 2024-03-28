#include "Human.h"
#include <iostream>
#include <string>

Human::Human() : Player("Human") {}

Human::Human(std::string name) : Player(name) {}

Move* Human::makeMove() {

    std::string player;
    std::cout << "Enter Move: ";
    std::cin >> player;
    std::cout <<""<<std::endl; 

    if (player == "Monkey" || player == "monkey") {
        Move* monkey = new Monkey("Monkey");
        move = monkey;
        return monkey;
    }
    else if (player == "Robot" || player == "robot") {
        Move* robot = new Robot("Robot");
        move = robot;
        return robot;
    }
    else if (player == "Pirate" || player == "pirate") {
        Move* pirate = new Pirate("Pirate");
        move = pirate;
        return pirate;
    }
    else if (player == "Ninja" || player == "ninja") {
        Move* ninja = new Ninja("Ninja");
        move = ninja;
        return ninja;
    }
    else if(player == "Zombie" || player == "zombie") {
        Move* zombie = new Ninja("Zombie");
        move = zombie;
        return zombie;
    }
    else {
        move = nullptr;
        return nullptr;
    }

}