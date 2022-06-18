/*************************************************************************
 * AUTHOR     	 : Justin Gea
 * Assignment #3 : Class Interfaces, Inheritance & Composition
 * CLASS      	 : CS 1C
 * SECTION    	 : MTWTTH 03:00pm - 05:35pm
 * DUE DATE   	 : 06/21/2022
 *************************************************************************/

#include "Programmer.h"
#include "SoftwareArchitect.h"

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
	employee1.SetHire(Date(8, 31, 2014));
	cout << "Employee 1 After:\n"
		 << employee1 << "\n\n";

	Employee employee2;
	employee2.SetName("Stephen Colbert");
	employee2.SetId(12346);
	employee2.SetPhone(3105555555);
	employee2.SetAge(51);
	employee2.SetGen("M");
	employee2.SetJob("Comedian");
	employee2.SetSalary(70123);
	employee2.SetHire(Date(5, 8, 2015));
	cout << "Employee 2:\n"
		 << employee2 << "\n\n";

	Employee employee3;
	employee3.SetName("James Corden");
	employee3.SetId(87654);
	employee3.SetPhone(7037031234);
	employee3.SetAge(37);
	employee3.SetGen("M");
	employee3.SetJob("Talk Show Host");
	employee3.SetSalary(900000);
	employee3.SetHire(Date(12, 25, 2014));
	cout << "Employee 3:\n"
		 << employee3 << "\n\n";

	Employee employee4(
		"Katie Couric", 77777, 20355556789, 58, "F", "News reporter", 500500, Date(3, 1, 2005));
	cout << "Employee 4:\n"
		 << employee4 << "\n\n";

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
	programmer1.SetHire(Date(12, 24, 2011));
	programmer1.SetDepartmentNumber(5432122);
	programmer1.SetSupervisorName("Joe Boss");
	programmer1.SetPercentageIncrease(4);
	programmer1.SetKnowsCpp(true);
	programmer1.SetKnowsJava(false);
	cout << "Programmer 1 After:\n"
		 << programmer1 << "\n\n";

	Programmer programmer2(
		"Mary Coder", 65432, 3105555555, 28, "F", "Programmer", 770123, Date(2, 8, 2010),
		6543222, "Mary Leader", 7, true, true);
	cout << "Programmer 2:\n"
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
	softwareArchitect1.SetHire(Date(12, 24, 2009));
	softwareArchitect1.SetDepartmentNumber(5434222);
	softwareArchitect1.SetSupervisorName("Big Boss");
	softwareArchitect1.SetPercentageIncrease(5);
	softwareArchitect1.SetYearsOfExperience(4);
	cout << "Software Architect 1 After:\n"
		 << softwareArchitect1 << "\n\n";

	SoftwareArchitect softwareArchitect2(
		"Sally Designer", 87878, 3105558888, 38, "F", "Architect", 870123, Date(2, 8, 2003),
		6543422, "Big Boss", 8, 11);
	cout << "Software Architect 2:\n"
		 << softwareArchitect2 << "\n\n";

	return 0;
}