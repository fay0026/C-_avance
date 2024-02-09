#include "warrior.h"

using namespace std;

Warrior::Warrior(istream & in): Player( in) {
}

std::ostream & Warrior::write(std::ostream& os)const{
    os << "Warrior ";
    return Player::write(os);
}

//Pour les combats, si le paramètre a gagné, on retourne vrai
// Wiz > War
bool Warrior::fight(const Wizard* wiz)const {
    return this->getStrength()+10<wiz->getStrength();
}

// War > War
bool Warrior::fight(const Warrior* war)const {
    return this->getStrength() < war->getStrength();
}

// Thief > War
bool Warrior::fight(const Thief* th )const {
    bool ret = false;
    if (th->getSkill() == 'A') {
        ret = this->getStrength() < th->getStrength();
    } else if (th->getSkill() == 'B') {
        ret = this->getStrength()+5 < th->getStrength();
    } else {
        ret = this->getStrength()+10 < th->getStrength();
    }
    return ret;
}

bool Warrior::operator>(const Player& p) const {
    return p.fight(this);
}
