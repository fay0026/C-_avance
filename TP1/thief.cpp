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

//Pour les combats, si le paramètre a gagné, on retourne vrai
// Wiz > Thief
bool Thief::fight(const Wizard* wiz)const {
    return true;
}

// War > Thief
bool Thief::fight(const Warrior* war)const {
    return true;
}

// Thief > Thief
bool Thief::fight(const Thief* th )const {
    bool ret = false;
    if (this->skill == 'A') {
        ret = true;
    } else if (this->skill == 'B') {
        if (th->getSkill() != 'A') {
            ret = true;
        }
    } else {
        if (th->getSkill() == 'C') {
            ret = true;
        }
    }
    return ret;
}

bool Thief::operator>(const Player& p) const {
    return p.fight(this);
}

/*
Thief::~Thief() {
    cout << "Voleur DCD" << endl;
}
bool Thief::isAlive()const {
    return this->Player::isAlive();
}
*/
