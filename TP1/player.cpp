#include "player.h"

using namespace std;

Player::Player(istream &in){
    string bonjour;
    in >> this->name;
    in >> this->strength;
    in >> this->lives;
}

Player::~Player(){}

std::ostream & Player::write(std::ostream& os)const {
    os <<this->name<<" lives "<<this->lives<<" strength "<<this->strength;
    return os;
}

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

bool Player::operator>(const Player&)const {}

Player& Player::operator--() {
    this->lives -= 1;
    return *this;
}
