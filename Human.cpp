#include "Human.h"
#include <iostream>
#include <string>

Human::Human() : Player("Human") {}

Human::Human(std::string name) : Player(name) {}

Move* Human::makeMove() {

    std::string player;
    std::cin >> player;

    if (player == "Rock" || player == "rock") {
        Move* rock = new Rock("Rock");
        move = rock;
        return rock;
    }
    else if (player == "Paper" || player == "paper") {
        Move* paper = new Paper("Paper");
        move = paper;
        return paper;
    }
    else if (player == "Scissors" || player == "scissors") {
        Move* scissors = new Scissors("Scissors");
        move = scissors;
        return scissors;
    }
    
    else if (player == "Monkey" || player == "monkey") {
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
        Move* zombie = new Zombie("Zombie");
        move = zombie;
        return zombie;
    }
    else {
        move = nullptr;
        return nullptr;
    }

}