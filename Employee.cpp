#include "Employee.h"

/*************************************************************************
 * Method NameToString: Class Employee
 * ----------------------------------------------------------------------
 * This function will convert the name to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 * 
 * POST-CONDITIONS
 * 		returns a string of the name.
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
 * Method IDToString: Class Employee
 * ----------------------------------------------------------------------
 * This function will convert the ID to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 * 
 * POST-CONDITIONS
 * 		returns a string of the ID.
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
 * Method PhoneToString: Class Employee
 * ----------------------------------------------------------------------
 * This function will convert the phone number to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 * 
 * POST-CONDITIONS
 * 		returns a string of the phone number.
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
 * Method AgeToString: Class Employee
 * ----------------------------------------------------------------------
 * This function will convert the age to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 * 
 * POST-CONDITIONS
 * 		returns a string of the age.
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
 * Method GenToString: Class Employee
 * ----------------------------------------------------------------------
 * This function will convert the Gen to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 * 
 * POST-CONDITIONS
 * 		returns a string of the Gen.
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
 * Method JobToString: Class Employee
 * ----------------------------------------------------------------------
 * This function will convert the job to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 * 
 * POST-CONDITIONS
 * 		returns a string of the job.
 **************************************************************************/

string Employee::JobToString() const
{
	if (job == "")
	{
		return "NA";
	}
	return job;
}

/*************************************************************************
 * Method SalaryToString: Class Employee
 * ----------------------------------------------------------------------
 * This function will convert the salary to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 * 
 * POST-CONDITIONS
 * 		returns a string of the salary.
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
 * Method operator <<: Class Employee
 * ----------------------------------------------------------------------
 * This function overloads the << operator to print the employee.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		An ostream object and an Employee object
 * 
 * POST-CONDITIONS
 * 		returns an ostream object that contains the formatted date.
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