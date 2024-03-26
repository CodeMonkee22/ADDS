#include "Human.h"
#include <iostream>

Human::Human(std::string name) : Player(name) {
}

Human::Human() : Player("Human") {
}


char Human::makeMove() {
    char move;
          cout << "Enter move: " << endl;
          cin >> move;
          switch(move) {
            case 'r':
              return 'r';
              break;
            case 'p':
              return 'p';
              break;
            case 's':
              return 's';
              break;
            default:
              return 'r';
              break;
          } 
}