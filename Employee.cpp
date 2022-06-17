// Employee.cpp

#include "Employee.h"

void Employee::printEmployeeHeader() const
{
    cout << left;
    cout 
	<< setw(COL_WIDTH) << "Name" 
	<< setw(COL_WIDTH) << "Employee's Id"
    << setw(COL_WIDTH) << "Phone"
    << setw(COL_WIDTH) << "Age"
    << setw(COL_WIDTH) << "Gen"
    << setw(COL_WIDTH) << "Job title"
    << setw(COL_WIDTH) << "Salary"
    << "Hire Date\n";
    cout << right;
}

void Employee::printEmployeeData() const
{
	cout << left;
	cout 
	<< setw(COL_WIDTH) << name
	<< setw(COL_WIDTH) << id
	<< setw(COL_WIDTH) << phone
	<< setw(COL_WIDTH) << age
	<< setw(COL_WIDTH) << gen
	<< setw(COL_WIDTH) << job
	<< setw(COL_WIDTH) << salary;
	hireData.printDate();
    cout << right;
}
