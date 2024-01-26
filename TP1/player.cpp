#include "player.h"

Player::~Player(){}

bool Player::isAlive()const {
    return this->lives>0;
}
