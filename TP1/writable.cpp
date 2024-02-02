#include "writable.h"

std::ostream& operator<<(std::ostream& os , const Writable& writable) {
   writable.write(os);
   return os;
}
