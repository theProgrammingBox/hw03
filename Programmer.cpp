// Programmer.cpp

#include "Programmer.h"

void Programmer::printProgrammerHeader() const
{
	cout << left;
	cout 
	<< setw(COL_WIDTH) << "Name" 
	<< setw(COL_WIDTH) << "Department"
	<< setw(COL_WIDTH) << "Supervisor's Name"
	<< setw(COL_WIDTH) << "Raise%"
	<< setw(COL_WIDTH) << "C++ Knowledge"
	<< setw(COL_WIDTH) << "Java Knowledge\n";
	cout << right;
}

void Programmer::printProgrammerData() const
{
	cout << left;
	cout 
	<< setw(COL_WIDTH) << getName()
	<< setw(COL_WIDTH) << departmentNumber
	<< setw(COL_WIDTH) << supervisorName
	<< setw(COL_WIDTH) << percentageIncrease
	<< setw(COL_WIDTH) << knowsCpp
	<< setw(COL_WIDTH) << knowsJava
	<< endl;
	cout << right;
}