#ifndef THIEF_H
#define THIEF_H
#include "player.h"
#include "warrior.h"
#include "wizard.h"

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
    virtual Clonable* clone()const;
    bool fight(const Wizard*)const;
    bool fight(const Warrior*)const;
    bool fight(const Thief*)const;
    bool operator>(const Player&) const;
};

#endif // THIEF_H
