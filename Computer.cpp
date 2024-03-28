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

    characterMap[1] = "Monkey";
    characterMap[2] = "Robot";
    characterMap[3] = "Pirate";
    characterMap[4] = "Ninja";
    characterMap[5] = "Zombie";

    while(true) {    
        
    int randMove = rand() % 5 + 1;

    std::string randCharacter = characterMap[randMove];

    if(characterMap[randMove] == "Monkey") {
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
    
  }
    
    return nullptr;
}