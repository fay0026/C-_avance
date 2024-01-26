#ifndef PLAYER_H
#define PLAYER_H
#include<string>
#include<iostream>

class Player
{
private:
    std::string name;
    int strength;
    int lives;
public:
    Player(std::istream &);
    virtual ~Player() = 0;
    const std::string & getName()const;
    int getStrength()const;
    int getLives()const;
    bool isAlive()const;
    //virtual bool isAlive()const =0;
};

#endif // PLAYER_H
