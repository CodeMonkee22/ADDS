#include "Player.h"

Player::Player(std::string name) : name(name) {}

Move* Player::getMove() {return move;}

std::string Player::getName() {return name;}

Player::~Player() {}

