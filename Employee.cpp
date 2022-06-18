#include "Employee.h"

/*************************************************************************
 * NameToString
 *************************************************************************
 * This function returns the name of the employee as a string.
 *
 * Returns: string
 *************************************************************************/

string Employee::NameToString() const
{
	if (name == "")
	{
		return "NA";
	}
	return name;
}

/*************************************************************************
 * IDToString
 *************************************************************************
 * This function will convert the ID to a string.
 *
 * Returns: string
 *************************************************************************/

string Employee::IDToString() const
{
	if (id == -1)
	{
		return "NA";
	}
	return to_string(id);
}

/*************************************************************************
 * PhoneToString
 *************************************************************************
 * This function will convert the phone to a string.
 *
 * Returns: string
 *************************************************************************/

string Employee::PhoneToString() const
{
	if (phone == 0)
	{
		return "NA";
	}
	return to_string(phone).insert(3, "-").insert(7, "-");
}

/*************************************************************************
 * AgeToString
 *************************************************************************
 * This function will convert the age to a string.
 *
 * Returns: string
 *************************************************************************/

string Employee::AgeToString() const
{
	if (age == -1)
	{
		return "NA";
	}
	return to_string(age);
}

/*************************************************************************
 * GenToString
 *************************************************************************
 * This function will convert the gen to a string.
 *
 * Returns: string
 *************************************************************************/

string Employee::GenToString() const
{
	if (gen == "")
	{
		return "NA";
	}
	return gen;
}

/*************************************************************************
 * JobToString
 *************************************************************************
 * This function will convert the job to a string.
 *
 * Returns: string
 *************************************************************************/

string Employee::JobToString() const
{
	if (job == "")
	{
		return "NA";
	}
	return job;
}

/*************************************************************************
 * SalaryToString
 *************************************************************************
 * This function will convert the salary to a string.
 *
 * Returns: string
 *************************************************************************/

string Employee::SalaryToString() const
{
	if (salary == 0)
	{
		return "NA";
	}
	string salaryStr = to_string(salary);
	string salaryStrOut = "";
	int index = 0;
	int size = salaryStr.size();
	while (index < size)
	{
		if ((size - index) % 3 == 0 && index != 0 && index != size - 1)
		{
			salaryStrOut += ",";
		}
		salaryStrOut += salaryStr[index];
		index++;
	}
	return "$" + salaryStrOut;
}

/*************************************************************************
 * << operator
 *************************************************************************
 * This function overloads the << operator to print the employee.
 *
 * Returns: ostream
 *************************************************************************/

ostream &operator<<(ostream &os, const Employee &employee)
{
	cout << "Name: " << employee.NameToString()
		 << "\nID: " << employee.IDToString()
		 << "\nPhone: " << employee.PhoneToString()
		 << "\nAge: " << employee.AgeToString()
		 << "\nGen: " << employee.GenToString()
		 << "\nJob: " << employee.JobToString()
		 << "\nSalary: " << employee.SalaryToString()
		 << "\nHire Date: " << employee.hireDate;
	return os;
}