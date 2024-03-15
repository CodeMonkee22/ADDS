#include "player.h"
#include "referee.h"
#include <iostream>


int main() {

    Player* player1;

    player1 = new Computer();

    string playerName;
    cout << "Enter player name: " << endl;
    cin >> playerName;

    Player* player2;

    player2 = new Human(playerName);

    Referee* referee;
    
    referee = new Referee();

    Player* player_result =  referee->refGame(player1, player2); 

    if(player_result == nullptr) {

    }
    
    else if (player_result->getName() == "Computer") {
        cout << "Computer wins!!" << endl;
    }
    else {
        cout << player_result->getName() << " wins!!" << endl;
    }

    cout << player_result->getName() << endl;

    return 0;
}