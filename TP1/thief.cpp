#include "thief.h"
#include <iostream>

using namespace std;

Thief::~Thief() {
    cout << "Voleur DCD" << endl;
}

bool Thief::isAlive()const {
    return this->Player::isAlive();
}
