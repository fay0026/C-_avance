#include "player.h"

using namespace std;

Player::Player(istream &in){
    in >> this->name;
    in >> this->strength;
    in >> this->lives;
}

Player::~Player(){}

const std::string & Player::getName() const{
    return this->name;
}

int Player::getStrength() const{
    return this->strength;
}

int Player::getLives() const{
    return this->lives;
}

bool Player::isAlive()const {
    return this->lives>0;
}
