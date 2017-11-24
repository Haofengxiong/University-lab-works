//Date.h//

#include<iostream>
using namespace std;

class Date
{
 private:

  int month, day, year;

 public:

  Date();
  Date(int m, int d, int y);

  void setMonth(int m);
  int getMonth();
  void setDay(int d);
  int getDay();
  void setYear(int y);
  int getYear();

  void printDate();

  bool sameMonth(const Date & date2);
};
