#include "Human.h"
#include <iostream>

Human::Human(std::string name) : Player(name) {
}

Human::Human() : Player("Human") {
}


char Human::makeMove() {
    char move;
          cout << "Enter move: ";
          cin >> move;
          switch(move) {
            case 'R':
              return move;
              break;
            case 'P':
              return move;
              break;
            case 'S':
              return move;
              break;
            default:
              return 'R';
              break;
          } 
}