#include "thief.h"

using namespace std;


Thief::Thief(istream& in): Player(in)
{
    in >> this->skill;
}

char Thief::getSkill() const{
    return this->skill;
}

std::ostream & Thief::write(std::ostream& os)const {
    os << "Thief ";
    return Player::write(os)<<" "<<this->skill;
}

/*
Thief::~Thief() {
    cout << "Voleur DCD" << endl;
}
bool Thief::isAlive()const {
    return this->Player::isAlive();
}
*/
