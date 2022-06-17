// Date.cpp

#include "Date.h"

void Date::printDate() const
{
	cout << month << "/" << day << "/" << year << endl;
}

ostream &operator<<(ostream &os, const Date &d)
{
	os << d.month << "/" << d.day << "/" << d.year << endl;
	return os;
}

// changes
