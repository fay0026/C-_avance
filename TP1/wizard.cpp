#include "wizard.h"

using namespace std;

Wizard::Wizard(istream& in): Player(in) {}

std::ostream & Wizard::write(std::ostream& os)const {
    os << "Wizard ";
    return Player::write(os);
}

//Pour les combats, si le paramètre a gagné, on retourne vrai
// Wiz > Wiz
bool Wizard::fight(const Wizard * wiz)const {
    return this->getStrength()<wiz->getStrength();
}

// War > Wiz
bool Wizard::fight(const Warrior * war)const {
    return true;
}

// Thief > Wiz
bool Wizard::fight(const Thief * th )const {
    return this->getStrength()+5<th->getStrength();
}
bool Wizard::operator>(const Player& p) const {
    return p.fight(this);
}
