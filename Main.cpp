/*************************************************************************
 * AUTHOR     	 : Justin Gea
 * Assignment #3 : Class Interfaces, Inheritance & Composition
 * CLASS      	 : CS 1C
 * SECTION    	 : MTWTTH 03:00pm - 05:35pm
 * DUE DATE   	 : 06/21/2022
 *************************************************************************/

#include "Programmer.h"
#include "SoftwareArchitect.h"

/**********************************************************
*
* Class Interfaces, Inheritance & Composition
*_________________________________________________________
* This program accepts creates an employee object, a
* programmer object, and a software architect object. For
* each object, the program will display the objects's
* initial information, then change the objects's data
* and display the objects's new information.
*_________________________________________________________
* INPUT:
*   None:	No user input is required.
*
* OUTPUT:
*   employee1:		The employee object's initial information.
*   employee2:		The employee object's new information.
*   programmer1:	The programmer object's initial information.
*   programmer2:	The programmer object's new information.
*   softwareArchitect1:	The software architect object's initial information.
*   softwareArchitect2:	The software architect object's new information.
***********************************************************/

int main()
{
	Employee employee1;
	cout << "Employee 1 Before:\n"
		 << employee1 << "\n\n";
	employee1.SetName("Jimmy Fallon");
	employee1.SetId(12345);
	employee1.SetPhone(9495551234);
	employee1.SetAge(40);
	employee1.SetGen("M");
	employee1.SetJob("Comedian");
	employee1.SetSalary(100000);
	employee1.SetHire(8, 31, 2014);
	cout << "Employee 1 After:\n"
		 << employee1 << "\n\n";

	Employee employee2(
		"Katie Couric", 77777, 20355556789, 58, "F", "News reporter", 500500, 
		3, 1, 2005);
	cout << "Employee 2 Before:\n"
		 << employee1 << "\n\n";
	employee2.SetName("Stephen Colbert");
	employee2.SetId(12346);
	employee2.SetPhone(3105555555);
	employee2.SetAge(51);
	employee2.SetGen("M");
	employee2.SetJob("Comedian");
	employee2.SetSalary(70123);
	employee2.SetHire(5, 8, 2015);
	cout << "Employee 2 After:\n"
		 << employee2 << "\n\n";

	Programmer programmer1;
	cout << "Programmer 1 Before:\n"
		 << programmer1 << "\n\n";
	programmer1.SetName("Sam Software");
	programmer1.SetId(54321);
	programmer1.SetPhone(8191234567);
	programmer1.SetAge(21);
	programmer1.SetGen("M");
	programmer1.SetJob("Programmer");
	programmer1.SetSalary(223000);
	programmer1.SetHire(12, 24, 2011);
	programmer1.SetDepartmentNumber(5432122);
	programmer1.SetSupervisorName("Joe Boss");
	programmer1.SetPercentageIncrease(4);
	programmer1.SetKnowsCpp(true);
	programmer1.SetKnowsJava(false);
	cout << "Programmer 1 After:\n"
		 << programmer1 << "\n\n";

	Programmer programmer2(
		"Mary Coder", 65432, 3105555555, 28, "F", "Programmer", 770123, 
		2, 8, 2010,
		6543222, "Mary Leader", 7, true, true);
	cout << "Programmer 2 Before:\n"
		 << programmer2 << "\n\n";
	programmer2.SetName("John Coder");
	programmer2.SetId(654321);
	programmer2.SetPhone(8191234567);
	programmer2.SetAge(21);
	programmer2.SetGen("M");
	programmer2.SetJob("Programmer");
	programmer2.SetSalary(223000);
	programmer2.SetHire(12, 24, 2011);
	programmer2.SetDepartmentNumber(5432122);
	programmer2.SetSupervisorName("Joe Boss");
	programmer2.SetPercentageIncrease(4);
	programmer2.SetKnowsCpp(true);
	programmer2.SetKnowsJava(false);
	cout << "Programmer 2 After:\n"
		 << programmer2 << "\n\n";

	SoftwareArchitect softwareArchitect1;
	cout << "Software Architect 1 Before:\n"
		 << softwareArchitect1 << "\n\n";
	softwareArchitect1.SetName("Alex Arch");
	softwareArchitect1.SetId(88888);
	softwareArchitect1.SetPhone(8191234444);
	softwareArchitect1.SetAge(31);
	softwareArchitect1.SetGen("M");
	softwareArchitect1.SetJob("Architect");
	softwareArchitect1.SetSalary(323000);
	softwareArchitect1.SetHire(12, 24, 2009);
	softwareArchitect1.SetDepartmentNumber(5434222);
	softwareArchitect1.SetSupervisorName("Big Boss");
	softwareArchitect1.SetPercentageIncrease(5);
	softwareArchitect1.SetYearsOfExperience(4);
	cout << "Software Architect 1 After:\n"
		 << softwareArchitect1 << "\n\n";

	SoftwareArchitect softwareArchitect2(
		"Sally Designer", 87878, 3105558888, 38, "F", "Architect", 870123, 
		2, 8, 2003,
		6543422, "Big Boss", 8, 11);
	cout << "Software Architect 2 Before:\n"
		 << softwareArchitect2 << "\n\n";
	softwareArchitect2.SetName("Bob Designer");
	softwareArchitect2.SetId(87878);
	softwareArchitect2.SetPhone(8191234444);
	softwareArchitect2.SetAge(31);
	softwareArchitect2.SetGen("M");
	softwareArchitect2.SetJob("Architect");
	softwareArchitect2.SetSalary(323000);
	softwareArchitect2.SetHire(12, 24, 2009);
	softwareArchitect2.SetDepartmentNumber(5434222);
	softwareArchitect2.SetSupervisorName("Big Boss");
	softwareArchitect2.SetPercentageIncrease(5);
	softwareArchitect2.SetYearsOfExperience(4);
	cout << "Software Architect 2 After:\n"
		 << softwareArchitect2 << "\n\n";

	return 0;
}