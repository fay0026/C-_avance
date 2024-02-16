#ifndef DAY_H
#define DAY_H
#include <iostream>

namespace Calendar{
  class Day {
  public:
      enum DayName { MON, TUE, WED, THU, FRI, SAT, SUN };
      Day(DayName);
      friend std::ostream& operator<<(std::ostream&,const Day&);
      Day operator+(int) const;
      Day operator-(int) const;
      Day& operator++();
      Day operator++(int);
      Day& operator--();
      Day operator--(int);
  private:
      DayName name;
  };
  std::ostream& operator<<(std::ostream&, const Day& D);
  Day operator+(int, const Day&);
  Day operator-(int, const Day&);
};

#endif // DAY_H
