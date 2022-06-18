#include "Programmer.h"

/*************************************************************************
 * Str
 *************************************************************************
 * This function will return a string containing the information of the
 * programmer.
 *
 * Returns: string
 *************************************************************************/

string Programmer::Str() const
{
	return Employee::Str() +
		   "\nDepartment Number: " + to_string(departmentNumber) +
		   "\nSupervisor Name: " + supervisorName +
		   "\nPercentage Increase: " + to_string(percentageIncrease) +
		   "\nKnows C++: " + (knowsCpp ? "Yes" : "No") +
		   "\nKnows Java: " + (knowsJava ? "Yes" : "No");
}

/*************************************************************************
 * <<
 *************************************************************************
 * This function overloads the << operator to print the programmer.
 *
 * Returns: ostream
 *************************************************************************/

ostream &operator<<(ostream &os, const Programmer &Programmer)
{
	cout << Programmer.Str();
	return os;
}