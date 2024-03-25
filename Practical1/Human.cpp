#include "Human.h"
#include <iostream>

Human::Human(std::string name) : Player(name) {
}

Human::Human() : Player("Human") {
}


char Human::makeMove() {
    char move;
    while(true) {
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
          } 
    }

}