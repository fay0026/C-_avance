#include <iostream>
#include <player.h>
#include <thief.h>
using namespace std;

int main()
{
   Player * thief = new Thief();
   thief->isAlive();
   delete thief;
   return 0;
}
