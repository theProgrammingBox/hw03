#include "Programmer.h"
#include "SoftwareArchitect.h"

int main()
{
    Employee employee1;
	cout << "Employee 1 Before:" << endl;
	cout << employee1 << "\n\n";
	employee1.setName("Jimmy Fallon");
	employee1.setId(12345);
	employee1.setPhone("949-555-1234");
	employee1.setAge(40);
	employee1.setGen("M");
	employee1.setJob("Comedian");
	employee1.setSalary("$100,000");
	employee1.setHire(Date("08", "31", "2014"));
	cout << "Employee 1 After:\n" << employee1 << "\n\n";

	Employee employee2;
	employee2.setName("Stephen Colbert");
	employee2.setId(12346);
	employee2.setPhone("310-555-5555");
	employee2.setAge(51);
	employee2.setGen("M");
	employee2.setJob("Comedian");
	employee2.setSalary("$70,123");
	employee2.setHire(Date("05", "08", "2015"));
	cout << "Employee 2:\n" << employee2 << "\n\n";

	Employee employee3;
	employee3.setName("James Corden");
	employee3.setId(87654);
	employee3.setPhone("703-703-1234");
	employee3.setAge(37);
	employee3.setGen("M");
	employee3.setJob("Talk Show Host");
	employee3.setSalary("$900,000");
	employee3.setHire(Date("12", "25", "2014"));
	cout << "Employee 3:\n" << employee3 << "\n\n";

	Employee employee4("Katie Couric", 77777, "203-555-6789", 58, "F", "News reporter", "$500,500", Date("03", "01", "2005"));
	cout << "Employee 4:\n" << employee4 << "\n\n";

	Programmer programmer1;
	cout << "Programmer 1 Before:" << endl;
	cout << programmer1 << "\n\n";
	programmer1.setName("Sam Software");
	programmer1.setId(54321);
	programmer1.setPhone("819-123-4567");
	programmer1.setAge(21);
	programmer1.setGen("M");
	programmer1.setJob("Programmer");
	programmer1.setSalary("$223,000");
	programmer1.setHire(Date("12", "24", "2011"));
	programmer1.setDepartmentNumber(5432122);
	programmer1.setSupervisorName("Joe Boss");
	programmer1.setPercentageIncrease(4);
	programmer1.setKnowsCpp(true);
	programmer1.setKnowsJava(false);
	cout << "Programmer 1 After:\n" << programmer1 << "\n\n";
	
	Programmer programmer2("Mary Coder", 65432, "310-555-5555", 28, "F", "Programmer", "$770,123", Date("02", "08", "2010"), 6543222, "Mary Leader", 7, true, true);
	cout << "Programmer 2:\n" << programmer2 << "\n\n";

	SoftwareArchitect softwareArchitect1;
	cout << "Software Architect 1 Before:" << endl;
	cout << softwareArchitect1 << "\n\n";
    softwareArchitect1.setName("Alex Arch");
    softwareArchitect1.setId(88888);
	softwareArchitect1.setPhone("819-123-4444");
	softwareArchitect1.setAge(31);
	softwareArchitect1.setGen("M");
	softwareArchitect1.setJob("Architect");
	softwareArchitect1.setSalary("$323,000");
	softwareArchitect1.setHire(Date("12", "24", "2009"));
	softwareArchitect1.setDepartmentNumber(5434222);
	softwareArchitect1.setSupervisorName("Big Boss");
	softwareArchitect1.setPercentageIncrease(5);
	softwareArchitect1.setYearsOfExperience(4);
	cout << "Software Architect 1 After:\n" << softwareArchitect1 << "\n\n";

	SoftwareArchitect softwareArchitect2("Sally Designer", 65434, "310-555-8888", 38, "F", "Architect", "$870,123", Date("02", "08", "2003"), 6543422, "Big Boss", 8, 11);
	cout << "Software Architect 2:\n" << softwareArchitect2 << "\n\n";

    return 0;
}