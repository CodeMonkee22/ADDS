#include "Player.h"
#include "Referee.h"
#include <iostream>


int main() {

    Player* player1= new Computer();

    Player* player2 = new Human("Joe");

    Referee* referee = new Referee();

    Player* player_result =  referee->refGame(player1, player2); 

    if(player_result == nullptr) {
        cout << "tie" << endl;
    }
    else {
        cout << player_result->getName() << " wins!!" << endl;
    }
    return 0;
}