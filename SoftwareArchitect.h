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

	void SetDepartmentNumber(int departmentNumber) { this->departmentNumber = departmentNumber; }
	void SetSupervisorName(string supervisorName) { this->supervisorName = supervisorName; }
	void SetPercentageIncrease(float percentageIncrease) { this->percentageIncrease = percentageIncrease; }
	void SetYearsOfExperience(int yearsOfExperience) { this->yearsOfExperience = yearsOfExperience; }

	string Str() const;
	friend ostream &operator<<(ostream &os, const SoftwareArchitect &softwareArchitect);
};