#pragma once
#include "Employee.h"

class Programmer : public Employee
{
private:
	int departmentNumber;
	string supervisorName;
	float percentageIncrease;
	bool knowsCpp;
	bool knowsJava;

public:
	Programmer()
		: departmentNumber(0), supervisorName(""), percentageIncrease(0), knowsCpp(false), knowsJava(false){};
	Programmer(int departmentNumber, string supervisorName, float percentageIncrease, bool knowsCpp, bool knowsJava)
		: departmentNumber(departmentNumber), supervisorName(supervisorName), percentageIncrease(percentageIncrease), knowsCpp(knowsCpp), knowsJava(knowsJava){};
	~Programmer() {}

	void setDepartmentNumber(int departmentNumber) { this->departmentNumber = departmentNumber; }
	void setSupervisorName(string supervisorName) { this->supervisorName = supervisorName; }
	void setPercentageIncrease(float percentageIncrease) { this->percentageIncrease = percentageIncrease; }
	void setKnowsCpp(bool knowsCpp) { this->knowsCpp = knowsCpp; }
	void setKnowsJava(bool knowsJava) { this->knowsJava = knowsJava; }

	string str() const;
	friend ostream &operator<<(ostream &os, const Programmer &programmer);
};
