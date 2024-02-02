#ifndef WRITABLE_H
#define WRITABLE_H
#include <iostream>

class Writable
{
public:
    virtual std::ostream & write(std::ostream&)const =0;
    virtual ~Writable(){};
};

std::ostream& operator<<(std::ostream&, const Writable&);
#endif // WRITABLE_H
