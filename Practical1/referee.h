#include "player.h"
#include "computer.h"
#include "human.h"

class Referee {
  public:
    Referee();
    Player* refGame(Player* player1, Player* player2);

};