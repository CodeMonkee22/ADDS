#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player {

  protected:
    char move;
    string name;

  public:
    virtual char makeMove() = 0;
    string getName();  
    Player(string name); 

};

#endif