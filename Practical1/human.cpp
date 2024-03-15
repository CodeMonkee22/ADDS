#include "human.h"
#include <iostream>
using namespace std;

Human::Human(string name) : name(name) {}

Human::Human() {
    this->name = "Human";
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