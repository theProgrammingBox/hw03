#include "Date.h"

/*************************************************************************
 * Str
 *************************************************************************
 * This function will return a string containing the month, day, and year
 * of the date.
 *
 * Returns: string
 *************************************************************************/

string Date::Str() const
{
	return month + "/" + day + "/" + year;
}

/*************************************************************************
 * <<
 *************************************************************************
 * This function overloads the << operator to print the date.
 *
 * Returns: ostream
 *************************************************************************/

ostream &operator<<(ostream &os, const Date &date)
{
	os << date.Str();
	return os;
}