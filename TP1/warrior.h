#ifndef WARRIOR_H
#define WARRIOR_H
#include "player.h"

class Warrior: public Player
{
public:
    Warrior(std::istream &);
    virtual std::ostream & write(std::ostream&)const;
    bool fight(const Wizard &)const;
    bool fight(const Warrior &)const;
    bool fight(const Thief &)const;
    bool operator>(const Player&) const;
};

#endif // WARRIOR_H
