#ifndef WIZARD_H
#define WIZARD_H
#include "player.h"

class Wizard: public Player
{
public:
    Wizard(std::istream &);
    virtual std::ostream & write(std::ostream&)const;
    bool fight(const Wizard &)const;
    bool fight(const Warrior &)const;
    bool fight(const Thief &)const;
    bool operator>(const Player&) const;
};

#endif // WIZARD_H
