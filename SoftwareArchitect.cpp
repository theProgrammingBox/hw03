// SoftwareArchitect.cpp

#include "SoftwareArchitect.h"

void SoftwareArchitect::printSoftwareArchitectHeader() const
{
	cout << left;
	cout 
	<< setw(COL_WIDTH) << "Name" 
	<< setw(COL_WIDTH) << "Department"
	<< setw(COL_WIDTH) << "Supervisor's Name"
	<< setw(COL_WIDTH) << "Raise%"
	<< setw(COL_WIDTH) << "Years of experience\n";
	cout << right;
}

void SoftwareArchitect::printSoftwareArchitectData() const
{
	cout << left;
	cout 
	<< setw(COL_WIDTH) << getName()
	<< setw(COL_WIDTH) << departmentNumber
	<< setw(COL_WIDTH) << supervisorName
	<< setw(COL_WIDTH) << percentageIncrease
	<< setw(COL_WIDTH) << yearsOfExperience
	<< endl;
	cout << right;
}
