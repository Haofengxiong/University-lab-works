//Date.cpp//

#include "Date.h"

Date::Date()
{
  month=0;
  day=0;
  year=0;
}
Date::Date(int theMonth, int theDay, int theYear)
{
  month=theMonth;
  day=theDay;
  year=theYear;
}

void Date::setMonth(int theMonth)
{
  month=theMonth;
}
int Date::getMonth()
{
  return month;
}

void Date::setDay(int theDay)
{
  day=theDay;
}
int Date::getDay()
{
  return day;
}

void Date::setYear(int theYear)
{
  year=theYear;
}
int Date::getYear()
{
  return year;
}

void Date::printDate()
{
  cout<<"Month: "<<month<<endl;
  cout<<"Day: "<<day<<endl;
  cout<<"Year: "<<year<<endl;
}

bool Date::sameMonth(const Date & date2)
{
  if(month == date2.month)
    return true;
  else
    return false;
}
