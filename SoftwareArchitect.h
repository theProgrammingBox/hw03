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
	SoftwareArchitect() : departmentNumber(0), supervisorName(""), percentageIncrease(0), yearsOfExperience(0){};
	SoftwareArchitect(int departmentNumber, string supervisorName, float percentageIncrease, int yearsOfExperience)
		: departmentNumber(departmentNumber), supervisorName(supervisorName), percentageIncrease(percentageIncrease), yearsOfExperience(yearsOfExperience){};
	~SoftwareArchitect(){};

	void setDepartmentNumber(int departmentNumber) { this->departmentNumber = departmentNumber; }
	void setSupervisorName(string supervisorName) { this->supervisorName = supervisorName; }
	void setPercentageIncrease(float percentageIncrease) { this->percentageIncrease = percentageIncrease; }
	void setYearsOfExperience(int yearsOfExperience) { this->yearsOfExperience = yearsOfExperience; }

	string str() const;
	friend ostream &operator<<(ostream &os, const SoftwareArchitect &softwareArchitect);
};