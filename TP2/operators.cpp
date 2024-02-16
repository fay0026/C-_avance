#include "tests.h"
#include <iostream>

using namespace std;
using namespace Calendar;

void testOperatorsDay1() {
    using Calendar::Day;
    Day d(Day::MON);
    cout << "Incrementation :" << endl;
    for (int i=0; i<8; i++) cout << (d+i) << endl;
    cout << "Decrementation :" << endl;
    for (int i=0; i<8; i++) cout << (d-i) << endl;
    cout << "--------" << endl;
    d = d+20;
    cout << d << endl;
    d = d+(-20);
    cout << d << endl;
    d = d-20;
    cout << d << endl;
    d = d-(-20);
    cout << d << endl;
}

void testOperatorsDay2() {
    using Calendar::Day;
    Day i(Day::MON);
    Day j(Day::MON);
    cout << ++i << endl;
    cout << j++ << endl;
    cout << i << endl;
    cout << j << endl;
    cout << --i << endl;
    cout << j-- << endl;
    cout << i << endl;
    cout << j << endl;
}
