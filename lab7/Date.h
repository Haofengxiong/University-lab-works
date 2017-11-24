#include <iostream>
using namespace std;

class Date
{
  private:
	int month;
	int day;
	int year;
  public:
	Date();
	Date(int m, int d, int y);
	int endOfMonth()const;
	int getMonth()const;
	int getDay()const;
	int getYear()const;
	void setMonth(int );
	void setDay(int );
	void setYear(int );
	void printDate() const;

	bool operator==(const Date& myDate) const;
	Date operator++();


};

ostream& operator<<(ostream&, const Date&);
	Date operator+ (const Date&, int);
	Date operator+ (int, const Date&);
