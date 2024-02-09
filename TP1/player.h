#ifndef PLAYER_H
#define PLAYER_H
#include "writable.h"
#include<string>
#include<iostream>

// forward declarations
class Wizard;
class Warrior;
class Thief;

class Player: public Writable{
    // ici on peut déclarer des Wizard* Warrior* ou Thief*
private:
    std::string name;
    int strength;
    int lives;
public:
    Player(std::istream &);
    virtual ~Player() = 0;
    virtual std::ostream & write(std::ostream&)const;
    const std::string & getName()const;
    int getStrength()const;
    int getLives()const;
    bool isAlive()const;
    //virtual bool isAlive()const =0;
    virtual bool operator>(const Player&) const = 0;
    // virtual Player& Player::operator--()const = 0;
    // virtual Player Player::operator--(int) = 0;
    Player& operator--();
    Player& operator--(int);
    virtual Player& clone(Player&)=0;
};

#endif // PLAYER_H
