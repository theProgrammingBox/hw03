#pragma once
#include "Employee.h"

class SoftwareArchitect : public Employee
{
private:
	int departmentNumber;
	string supervisorName;
	float percentageIncrease;
	int yearsOfExperience;

public:
	SoftwareArchitect() : Employee(), departmentNumber(0), supervisorName(""), percentageIncrease(0), yearsOfExperience(0){};
	SoftwareArchitect(string name, int id, string phone, int age, string gen, string job, string salary, Date hireData, int departmentNumber, string supervisorName, float percentageIncrease, int yearsOfExperience)
		: Employee(name, id, phone, age, gen, job, salary, hireData), departmentNumber(departmentNumber), supervisorName(supervisorName), percentageIncrease(percentageIncrease), yearsOfExperience(yearsOfExperience){};
	~SoftwareArchitect(){};

	void setDepartmentNumber(int departmentNumber) { this->departmentNumber = departmentNumber; }
	void setSupervisorName(string supervisorName) { this->supervisorName = supervisorName; }
	void setPercentageIncrease(float percentageIncrease) { this->percentageIncrease = percentageIncrease; }
	void setYearsOfExperience(int yearsOfExperience) { this->yearsOfExperience = yearsOfExperience; }

	string str() const;
	friend ostream &operator<<(ostream &os, const SoftwareArchitect &softwareArchitect);
};