#include "Player.h"
#include "Computer.h"
#include "Human.h"

class Referee {
  public:
    Referee();
    Player* refGame(Player* player1, Player* player2);

};