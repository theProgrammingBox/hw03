#include "SoftwareArchitect.h"

/*************************************************************************
 * Str
 *************************************************************************
 * This function will return a string containing the information of the
 * software architect.
 *
 * Returns: string
 *************************************************************************/

string SoftwareArchitect::Str() const
{
	return Employee::Str() +
		   "\nDepartment Number: " + to_string(departmentNumber) +
		   "\nSupervisor Name: " + supervisorName +
		   "\nPercentage Increase: " + to_string(percentageIncrease) +
		   "\nYears of Experience: " + to_string(yearsOfExperience);
}

/*************************************************************************
 * <<
 *************************************************************************
 * This function overloads the << operator to print the software architect.
 *
 * Returns: ostream
 *************************************************************************/

ostream &operator<<(ostream &os, const SoftwareArchitect &softwareArchitect)
{
	cout << softwareArchitect.Str();
	return os;
}