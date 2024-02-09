#ifndef PLAYER_H
#define PLAYER_H
#include "writable.h"
#include "clonable.h"
#include<string>
#include<iostream>

// forward declarations
class Wizard;
class Warrior;
class Thief;

class Player: public Writable, public Clonable {
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
    virtual bool fight(const Wizard*)const =0;
    virtual bool fight(const Warrior*)const =0;
    virtual bool fight(const Thief*)const =0;
    //virtual bool isAlive()const =0;
    virtual bool operator>(const Player&) const = 0;
    Player& operator--();
};

#endif // PLAYER_H
