#include <ostream>
#include "Day.h"
using namespace std;

namespace Calendar {
    Day::Day(Day::DayName name) : name(name) {};

    ostream& operator<<(ostream& o, const Day& D) {
        switch (D.name){
        case 0:
            o << "Monday";
            break;
        case 1:
            o << "Tuesday";
            break;
        case 2:
            o << "Wednesday";
            break;
        case 3:
            o << "Thursday";
            break;
        case 4:
            o << "Friday";
            break;
        case 5:
            o << "Saturday";
            break;
        case 6:
            o << "Sunday";
            break;
        }
        return o;
    }

    Day Day::operator+(int n) const {
        int newName = ((7+(this->name+n))%7);
        return Day((Day::DayName)newName);
    }

    Day Day::operator-(int n) const {
        return *this + -n;
    }

    Day operator+(int n, const Day& D) {
        return D+n;
    }
    Day operator-(int n, const Day& D) {
        return D-n;
    }

    Day& Day::operator++()
    {
        this->name = (Day::DayName)((this->name+1)%7);
        return *this;
    }
    Day Day::operator++(int)
    {
        Day D = *this;
        ++*this;
        return D;
    }
    Day& Day::operator--()
    {
        this->name = (Day::DayName)((this->name+6)%7);
        return *this;
    }
    Day Day::operator--(int)
    {
        Day D = *this;
        --*this;
        return D;
    }
}


