#ifndef PLAYER_H
#define PLAYER_H
#include<string>

class Player
{
private:
    std::string name;
    int strength;
    int lives;
public:
    virtual ~Player();
    const std::string & getName()const;
    int getStrength()const;
    int getLives()const;
    virtual bool isAlive()const =0;
};

#endif // PLAYER_H
