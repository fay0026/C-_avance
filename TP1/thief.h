#ifndef THIEF_H
#define THIEF_H
#include "player.h"

class Thief: public Player
{
private:
    char skill;
public:
    const char & getSkill()const;
};

#endif // THIEF_H
