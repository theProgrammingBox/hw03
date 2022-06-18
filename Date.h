#pragma once
#include "Header.h"

class Date
{
private:
	string month;
	string day;
	string year;

public:
	Date() : month("00"), day("00"), year("0000") {}
	Date(string month, string day, string year)
		: month(month), day(day), year(year) {}
	~Date(){};

	void SetMonth(string month) { this->month = month; }
	void SetDay(string day) { this->day = day; }
	void SetYear(string year) { this->year = year; }

	string Str() const;
	friend ostream &operator<<(ostream &os, const Date &date);
};