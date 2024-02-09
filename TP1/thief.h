#ifndef THIEF_H
#define THIEF_H
#include "player.h"

class Thief: public Player
{
private:
    char skill;
public:
    Thief(std::istream &);
    //~Thief();
    char getSkill()const;
    //virtual bool isAlive()const;
    virtual std::ostream & write(std::ostream&)const;
    bool fight(const Wizard &)const;
    bool fight(const Warrior &)const;
    bool fight(const Thief &)const;
    bool operator>(const Player&) const;
    // Player operator--(int);
};

#endif // THIEF_H
