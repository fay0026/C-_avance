#include "warrior.h"

using namespace std;

Warrior::Warrior(istream & in): Player( in) {
}

std::ostream & Warrior::write(std::ostream& os)const{
    os << "Warrior ";
    return Player::write(os);
}

// Wiz > War
bool Warrior::fight(const Wizard & wiz)const {
    return this->getStrength()+10<wiz.getStrength();
}
// War > War
bool Warrior::fight(const Warrior & war)const {
}
// Thief > War
bool Warrior::fight(const Thief & t )const {
}
bool Warrior::operator>(const Player& p) const {
    return p.fight(this);
}
