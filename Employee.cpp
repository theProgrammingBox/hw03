#include "Employee.h"

/*************************************************************************
 * Str
 *************************************************************************
 * This function will return a string containing the information of the
 * employee.
 *
 * Returns: string
 *************************************************************************/

string Employee::Str() const
{
	return "Name: " + name +
		   "\nID: " + to_string(id) +
		   "\nPhone: " + phone +
		   "\nAge: " + to_string(age) +
		   "\nGen: " + gen +
		   "\nJob: " + job +
		   "\nSalary: " + salary +
		   "\nHire Date: " + hireData.Str();
}

/*************************************************************************
 * <<
 *************************************************************************
 * This function overloads the << operator to print the employee.
 *
 * Returns: ostream
 *************************************************************************/

ostream &operator<<(ostream &os, const Employee &employee)
{
	cout << employee.Str();
	return os;
}