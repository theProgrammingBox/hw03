#pragma once
#include "Header.h"

class Date
{
private:
	string month;
	string day;
	string year;

public:
	Date() : month(0), day(0), year(0000) {}
	Date(string month, string day, string year)
		: month(month), day(day), year(year) {}
	~Date(){};

	void setMonth(string month) { this->month = month; }
	void setDay(string day) { this->day = day; }
	void setYear(string year) { this->year = year; }

	string str() const;
	friend ostream &operator<<(ostream &os, const Date &date);
};