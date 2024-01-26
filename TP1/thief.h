#ifndef THIEF_H
#define THIEF_H
#include "player.h"

class Thief: public Player
{
private:
    char skill;
public:
    virtual ~Thief();
    const char & getSkill()const;
    bool isAlive()const;

};

#endif // THIEF_H
