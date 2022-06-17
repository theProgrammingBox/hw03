#include "Programmer.h"
#include "SoftwareArchitect.h"

int main()
{

    Employee employee1;
	employee1.setName("Jimmy Fallon");
	employee1.setId(12345);
	employee1.setPhone("949-555-1234");
	employee1.setAge(40);
	employee1.setGen("M");
	employee1.setJob("Comedian");
	employee1.setSalary("$100,000");
    Date date1;
	date1.setMonth("08");
	date1.setDay("31");
	date1.setYear("2014");
	employee1.setHire(date1);
	cout << "Employee 1:" << endl;
	cout << employee1 << "\n\n";

	Employee employee2;
	employee2.setName("Stephen Colbert");
	employee2.setId(12346);
	employee2.setPhone("310-555-5555");
	employee2.setAge(51);
	employee2.setGen("M");
	employee2.setJob("Comedian");
	employee2.setSalary("$70,123");
	Date date2;
	date2.setMonth("05");
	date2.setDay("08");
	date2.setYear("2015");
	employee2.setHire(date2);
	cout << "Employee 2:" << endl;
	cout << employee2 << "\n\n";

	Employee employee3;
	employee3.setName("James Corden");
	employee3.setId(87654);
	employee3.setPhone("703-703-1234");
	employee3.setAge(37);
	employee3.setGen("M");
	employee3.setJob("Talk Show Host");
	employee3.setSalary("$900,000");
	Date date3;
	date3.setMonth("12");
	date3.setDay("25");
	date3.setYear("2014");
	employee3.setHire(date3);
	cout << "Employee 3:" << endl;
	cout << employee3 << "\n\n";

	Date date4;
	date4.setMonth("03");
	date4.setDay("01");
	date4.setYear("2005");
    Employee employee4("Katie Couric", 77777, "203-555-6789", 58, "F", "News reporter", "$500,500", date4);
	cout << "Employee 4:" << endl;
	cout << employee4 << "\n\n";

	Programmer programmer1;
	programmer1.setName("Sam Software");
	programmer1.setId(54321);
	programmer1.setPhone("819-123-4567");
	programmer1.setAge(21);
	programmer1.setGen("M");
	programmer1.setJob("Programmer");
	programmer1.setSalary("$223,000");
	Date date5;
	date5.setMonth("12");
	date5.setDay("24");
	date5.setYear("2011");
	programmer1.setHire(date5);
	programmer1.setDepartmentNumber(5432122);
	programmer1.setSupervisorName("Joe Boss");
	programmer1.setPercentageIncrease(4);
	programmer1.setKnowsCpp(true);
	programmer1.setKnowsJava(false);
	cout << "Programmer 1:" << endl;
	cout << programmer1 << "\n\n";

	Programmer programmer2;
	programmer2.setName("Mary Coder");
	programmer2.setId(65432);
	programmer2.setPhone("310-555-5555");
	programmer2.setAge(28);
	programmer2.setGen("F");
	programmer2.setJob("Programmer");
	programmer2.setSalary("$770,123");
	Date date6;
	date6.setMonth("02");
	date6.setDay("08");
	date6.setYear("2010");
	programmer2.setHire(date6);
	programmer2.setDepartmentNumber(6543222);
	programmer2.setSupervisorName("Mary Leader");
	programmer2.setPercentageIncrease(7);
	programmer2.setKnowsCpp(true);
	programmer2.setKnowsJava(true);
	cout << "Programmer 2:" << endl;
	cout << programmer2 << "\n\n";

	SoftwareArchitect softwareArchitect1;
    softwareArchitect1.setName("Alex Arch");
    softwareArchitect1.setId(88888);
	softwareArchitect1.setPhone("819-123-4444");
	softwareArchitect1.setAge(31);
	softwareArchitect1.setGen("M");
	softwareArchitect1.setJob("Architect");
	softwareArchitect1.setSalary("$323,000");
	Date date7;
	date7.setMonth("12");
	date7.setDay("24");
	date7.setYear("2009");
	softwareArchitect1.setHire(date7);
	softwareArchitect1.setDepartmentNumber(5434222);
	softwareArchitect1.setSupervisorName("Big Boss");
	softwareArchitect1.setPercentageIncrease(5);
	softwareArchitect1.setYearsOfExperience(4);
	cout << "Software Architect 1:" << endl;
	cout << softwareArchitect1 << "\n\n";

	SoftwareArchitect softwareArchitect2;
	softwareArchitect2.setName("Sally Designer");
	softwareArchitect2.setId(65434);
	softwareArchitect2.setPhone("310-555-8888");
	softwareArchitect2.setAge(38);
	softwareArchitect2.setGen("F");
	softwareArchitect2.setJob("Architect");
	softwareArchitect2.setSalary("$870,123");
	Date date8;
	date8.setMonth("02");
	date8.setDay("08");
	date8.setYear("2003");
	softwareArchitect2.setHire(date8);
	softwareArchitect2.setDepartmentNumber(6543422);
	softwareArchitect2.setSupervisorName("Big Boss");
	softwareArchitect2.setPercentageIncrease(8);
	softwareArchitect2.setYearsOfExperience(11);
	cout << "Software Architect 2:" << endl;
	cout << softwareArchitect2 << "\n\n";

    return 0;
}