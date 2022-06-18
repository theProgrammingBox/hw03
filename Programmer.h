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
	Programmer() : Employee(), departmentNumber(0), supervisorName(""), percentageIncrease(0), knowsCpp(false), knowsJava(false){};
	Programmer(string name, int id, string phone, int age, string gen, string job, string salary, Date hireData, int departmentNumber, string supervisorName, float percentageIncrease, bool knowsCpp, bool knowsJava)
		: Employee(name, id, phone, age, gen, job, salary, hireData), departmentNumber(departmentNumber), supervisorName(supervisorName), percentageIncrease(percentageIncrease), knowsCpp(knowsCpp), knowsJava(knowsJava){};
	~Programmer() {}

	void SetDepartmentNumber(int departmentNumber) { this->departmentNumber = departmentNumber; }
	void SetSupervisorName(string supervisorName) { this->supervisorName = supervisorName; }
	void SetPercentageIncrease(float percentageIncrease) { this->percentageIncrease = percentageIncrease; }
	void SetKnowsCpp(bool knowsCpp) { this->knowsCpp = knowsCpp; }
	void SetKnowsJava(bool knowsJava) { this->knowsJava = knowsJava; }

	string Str() const;
	friend ostream &operator<<(ostream &os, const Programmer &programmer);
};
