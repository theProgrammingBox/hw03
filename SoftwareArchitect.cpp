#include "SoftwareArchitect.h"

string SoftwareArchitect::str() const
{
	return Employee::str() +
		   "\nDepartment Number: " + to_string(departmentNumber) +
		   "\nSupervisor Name: " + supervisorName +
		   "\nPercentage Increase: " + to_string(percentageIncrease) +
		   "\nYears of Experience: " + to_string(yearsOfExperience);
}

ostream &operator<<(ostream &os, const SoftwareArchitect &softwareArchitect)
{
	cout << softwareArchitect.str();
	return os;
}