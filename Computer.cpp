#include "Computer.h"
#include "Move.h"
#include <cstdlib>
#include <ctime>
#include <map>
#include <string>

Computer::Computer() : Player("Computer") {}

Computer::Computer(std::string name) : Player(name) {}

Move* Computer::makeMove() {
    
    srand(time(nullptr));

    Move* character = nullptr;

    std::map<int,std::string> characterMap;

    characterMap[1] = "Rock";
    characterMap[2] = "Paper";
    characterMap[3] = "Scissors";
    characterMap[4] = "Monkey";
    characterMap[5] = "Robot";
    characterMap[6] = "Pirate";
    characterMap[7] = "Ninja";
    characterMap[8] = "Zombie";    
        
    int randMove = rand() % 8 + 1;

    std::string randCharacter = characterMap[randMove];

    if(characterMap[randMove] == "Rock") {
        character = new Rock(characterMap[randMove]);
        move = character;
        return character;
    }
    else if(characterMap[randMove] == "Paper") {
        character = new Paper(characterMap[randMove]);
        move = character;
        return character;
    }
    else if(characterMap[randMove] == "Scissors") {
        character = new Scissors(characterMap[randMove]);
        move = character;
        return character;
    }
    else if(characterMap[randMove] == "Monkey") {
        character = new Monkey(characterMap[randMove]);
        move = character;
        return character;
    }
    else if(characterMap[randMove] == "Robot") {
        character = new Robot(characterMap[randMove]);
        move = character;
        return character;
    }
    else if(characterMap[randMove] == "Pirate") {
        character = new Pirate(characterMap[randMove]);
        move = character;
        return character;
    }
    else if(characterMap[randMove] == "Ninja") {
        character = new Ninja(characterMap[randMove]);
        move = character;
        return character;
    }
    else if(characterMap[randMove] == "Zombie") {
        character = new Zombie(characterMap[randMove]);
        move = character;
        return character;
    }

    
    return nullptr;
}