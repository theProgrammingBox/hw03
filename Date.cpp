#include "Date.h"

string Date::str() const
{
	return month + "/" + day + "/" + year;
}

ostream &operator<<(ostream &os, const Date &date)
{
	os << date.str();
	return os;
}