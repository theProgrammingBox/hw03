#include "Employee.h"

string Employee::str() const
{
	return "Name: " + name +
		   "\nID: " + to_string(id) +
		   "\nPhone: " + phone +
		   "\nAge: " + to_string(age) +
		   "\nGen: " + gen +
		   "\nJob: " + job +
		   "\nSalary: " + salary +
		   "\nHire Date: " + hireData.str();
}

ostream &operator+(ostream &os, const Employee &employee)
{
	cout << employee.str();
	return os;
}