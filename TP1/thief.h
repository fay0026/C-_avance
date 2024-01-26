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

};

#endif // THIEF_H
