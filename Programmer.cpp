#include "Programmer.h"

string Programmer::str() const
{
	return Employee::str() +
		   "\nDepartment Number: " + to_string(departmentNumber) +
		   "\nSupervisor Name: " + supervisorName +
		   "\nPercentage Increase: " + to_string(percentageIncrease) +
		   "\nKnows C++: " + (knowsCpp ? "Yes" : "No") +
		   "\nKnows Java: " + (knowsJava ? "Yes" : "No");
}

ostream &operator<<(ostream &os, const Programmer &Programmer)
{
	cout << Programmer.str();
	return os;
}